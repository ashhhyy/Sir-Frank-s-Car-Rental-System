#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;


//Login function
void login() {
    string UserName, Password;
    string UseEnter, PassEnter;
    bool On_Off = true;
    bool Off = true;
    int countt = 0;
    int left = 3;

    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\tWelcome to Our Company ,Login to your Account  " << endl;
    cout << "\t\t\t\t----------------------------------------------\n";

    while (On_Off) {

        fstream user;
        user.open("users.txt", ios::in);
        if (countt < 3 && Off && user.is_open()) {
            if (countt > 0) {
                cout << "\nPassword or UserName are not correct!!" << endl;
                left--;
                cout << "You have *" << left << "* attempts left \n" << endl;
            }
            cout << "Enter UserName: ";
            getline(cin, UseEnter);
            cout << "Enter Password: ";
            getline(cin, PassEnter);
            countt++;
            string read;

            while (getline(user, read)) {
                stringstream convertor(read);
                convertor >> UserName >> Password;
                if (UseEnter == UserName && PassEnter == Password) {
                    Off = false;
                }
            }

        }
        else if (!Off) {

            cout << "\t\t\t\t----------------------------------------------\n";
            cout << "\t\t\t\t\t\t**** Welcome! ****  " << endl;
            cout << "\t\t\t\t----------------------------------------------\n";

            user.close();
            On_Off = false;
        }
        else {
            cout << "\n**** try again later!! **** \n\n";
            user.close();
            On_Off = false;
        }
    }
}

// Registry function
void registry() {
    string newName, checkName, newPass, confirmPass;
    int MiniPass;
    bool if_ON = true;
    bool oo = true;

    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t\t**** Create New Account ****  " << endl;
    cout << "\t\t\t\t----------------------------------------------\n";


    //UserName Validation
    while (oo) {
        cout << "Enter New UserName: ";
        getline(cin, newName);
        MiniPass = newName.length();
        fstream yusers;
        yusers.open("Users.txt", ios::in);
        if (if_ON && MiniPass >= 1 && yusers.is_open()) {
            string readd;
            while (getline(yusers, readd)) {
                stringstream OnlyUsers(readd);
                OnlyUsers >> checkName;
                if (newName == checkName) {

                    cout << "\t\t\t>>>>>>" << newName << " * UserName already exists please try another one <<<<<<" << endl;

                    if_ON = false;
                }
            }
            yusers.close();
            if (!if_ON) {
                if_ON = true;
            }
            else {
                oo = false;
            }
        }
    }
    //Password Validation
    while (true) {
        cout << "Enter New password: ";
        getline(cin, newPass);
        cout << "Confirm the password: ";
        getline(cin, confirmPass);
        MiniPass = newPass.length();

        if (MiniPass < 5) {

            cout << "\t\t\t\t\t>>>>>> Password Weak! <<<<<<" << endl;
            cout << "\t\t\t\t>>>>>> Password must at least 5 letters! <<<<<<" << endl;
        }
        else if (confirmPass == newPass) {
            fstream users;
            users.open("Users.txt", ios::app);
            if (users.is_open()) {
                users << newName + " " + newPass << endl;
                users.close();
            }
            cout << "\t\t\t\t\t Successfully new account created! \n \n";

            break;
        }
        else {
            cout << "\t\t\t\t\t Password confirmation not correct! \n \n" << endl;

        }
    }
    login();

}




int main()
{

    string LoR;

    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
    cout << "\t\t\t\t\t -----Login or Register-----  " << endl;
    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t***** Please write login or register *****\n\n";


    while (true) {

        getline(cin, LoR);
        if (LoR == "login") {
            login();
            break;
        }
        else if (LoR == "register") {
            registry();
            break;
        }
        else {
            cout << "\t\t\t\t***** Please write login or register *****\n\n";
        }
    }
    return 0;
}