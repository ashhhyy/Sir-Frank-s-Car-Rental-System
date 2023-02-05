#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// Menu
void menu()
{
    string carmodel;
    int bank_acc;
   
    
    
    system("CLS");
    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
    cout << "\t\t\t\t----------------------------------------------\n\n\n";
    cout << "\t\t\t\tEnter '1' to select Tesla " << endl;
    cout << "\t\t\t\tEnter '2' to select Porsche" << endl;
    cout << "\t\t\t\tEnter '3' to select Toyota " << endl;
    cout << "\t\t\t\tEnter '4' to select Audi " << endl;
    cout << "\t\t\t\tEnter '5' to select BMW \n\n";
    cout << "\t\t\t\tChoose a Car from the above options: ";
    cin >> carmodel;
    cout << endl;
    cout << "--------------------------------------------------------------------------" << endl;

    if (carmodel == "1")
    {
        system("CLS");
        
        while (true)
        {
            int payment;
            cout << "\t\t\t\t----------------------------------------------\n";
            cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
            cout << "\t\t\t\t----------------------------------------------\n\n\n";
            cout << "\t\t\t\t\tCar   : Tesla " << endl;
            cout << "\t\t\t\t\tPrice : 3,000 / day \n\n\n";
            cout << "\t\t\t\t\tBank Acount Number :  ";
            cin >> bank_acc;
            cout << "\t\t\t\t\tPayment Amount :  ";
            cin >> payment;

            if (payment < 3000)
            {   
                system("CLS");
                cout << "\n\n";
                cout << "\t\t\t\t------------Unsuccessful Transaction!------------ \n";
                cout << "\t\t\t\t------------Please Pay Enough Amount!------------\n\n\n";
                continue;
            }
            else
            {
                system("CLS");
                cout << "\n\n\n";
                cout << "\t\t\t\t------------Successful Transaction!------------ \n";
                cout << "\t\t\t\t------------------Thank You!-------------------\n\n\n";
                break;
            }
        }
        
   
    }

    if (carmodel == "2")
    {
        system("CLS");
        
        while (true)
        {
            int payment;

            cout << "\t\t\t\t----------------------------------------------\n";
            cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
            cout << "\t\t\t\t----------------------------------------------\n\n\n";
            cout << "\t\t\t\t\tCar   : Porsche " << endl;
            cout << "\t\t\t\t\tPrice : 5500 / day \n\n\n";
            cout << "\t\t\t\t\tBank Acount Number :  ";
            cin >> bank_acc;
            cout << "\t\t\t\t\tPayment Amount :  ";
            cin >> payment;

            if (payment < 5500)
            {
                system("CLS");
                cout << "\n\n";
                cout << "\t\t\t\t------------Unsuccessful Transaction!------------ \n";
                cout << "\t\t\t\t------------Please Pay Enough Amount!------------\n\n\n";
                continue;
            }
            else
            {
                system("CLS");
                cout << "\n\n\n";
                cout << "\t\t\t\t------------Successful Transaction!------------ \n";
                cout << "\t\t\t\t------------------Thank You!-------------------\n\n\n";
                break;
            }
        }

        
    }

    if (carmodel == "3")
    {
        system("CLS");

        while (true)
        {
            int payment;

            cout << "\t\t\t\t----------------------------------------------\n";
            cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
            cout << "\t\t\t\t----------------------------------------------\n\n\n";
            cout << "\t\t\t\t\tCar   : Toyota " << endl;
            cout << "\t\t\t\t\tPrice : 2500 / day \n\n\n";
            cout << "\t\t\t\t\tBank Acount Number :  ";
            cin >> bank_acc;
            cout << "\t\t\t\t\tPayment Amount :  ";
            cin >> payment;

            if (payment < 2500)
            {
                system("CLS");
                cout << "\n\n";
                cout << "\t\t\t\t------------Unsuccessful Transaction!------------ \n";
                cout << "\t\t\t\t------------Please Pay Enough Amount!------------\n\n\n";
                continue;
            }
            else
            {
                system("CLS");
                cout << "\n\n\n";
                cout << "\t\t\t\t------------Successful Transaction!------------ \n";
                cout << "\t\t\t\t------------------Thank You!-------------------\n\n\n";
                break;
            }
        }
       
    }

    if (carmodel == "4")
    {
        int payment;
        system("CLS");

        while (true)
        {

            cout << "\t\t\t\t----------------------------------------------\n";
            cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
            cout << "\t\t\t\t----------------------------------------------\n\n\n";
            cout << "\t\t\t\t\tCar   : Audi " << endl;
            cout << "\t\t\t\t\tPrice : 3000 / day \n\n\n";
            cout << "\t\t\t\t\tBank Acount Number :  ";
            cin >> bank_acc;
            cout << "\t\t\t\t\tPayment Amount :  ";
            cin >> payment;

            if (payment < 3000)
            {
                system("CLS");
                cout << "\n\n";
                cout << "\t\t\t\t------------Unsuccessful Transaction!------------ \n";
                cout << "\t\t\t\t------------Please Pay Enough Amount!------------\n\n\n";
                continue;
            }
            else
            {
                system("CLS");
                cout << "\n\n\n";
                cout << "\t\t\t\t------------Successful Transaction!------------ \n";
                cout << "\t\t\t\t------------------Thank You!-------------------\n\n\n";
                break;
            }
        }
        
    }

    if (carmodel == "5")
    {
        int payment;
        system("CLS");

        while (true)
        {
            cout << "\t\t\t\t----------------------------------------------\n";
            cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
            cout << "\t\t\t\t----------------------------------------------\n\n\n";
            cout << "\t\t\t\t\tCar   : BMW " << endl;
            cout << "\t\t\t\t\tPrice : 4,000 / day \n\n\n";
            cout << "\t\t\t\t\tBank Acount Number :  ";
            cin >> bank_acc;
            cout << "\t\t\t\t\tPayment Amount :  ";
            cin >> payment;

            if (payment < 4000)
            {
                system("CLS");
                cout << "\n\n";
                cout << "\t\t\t\t------------Unsuccessful Transaction!------------ \n";
                cout << "\t\t\t\t------------Please Pay Enough Amount!------------\n\n\n";
                continue;
            }
            else
            {
                system("CLS");
                cout << "\n\n\n";
                cout << "\t\t\t\t------------Successful Transaction!------------ \n";
                cout << "\t\t\t\t------------------Thank You!-------------------\n\n\n";
                break;
            }
        }
        
    }



}



//LOGIN
void login()
{
    string Username, Password;
    string UserEnter, PassEnter;
    bool on_off = true;
    bool off = true;
    int countt = 0;
    int left = 3;

    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\tWelcome to Our Company ,Login to your Account  \n";
    cout << "\t\t\t\t----------------------------------------------\n";

    while (on_off)
    {
        fstream user;
        user.open("users.txt", ios::in);
        if (countt < 3 && off && user.is_open())
        {
            if (countt > 0)
            {
                cout << "\t\t\t\t---Password or UserName are not correct!!---\n\n";
                left--;
                cout << "\t\t\t\t----------You have " << left << " attempts left---------- \n";
            }
            cout << "Enter Username:";
            getline(cin, UserEnter);
            cout << "Enter Password:";
            getline(cin, PassEnter);
            countt++;
            string read;

            while (getline(user, read))
            {
                stringstream convertor(read);
                convertor >> Username >> Password;
                if (UserEnter == Username && PassEnter == Password)
                {
                    off = false;
                }
            }
        }

        else if (!off)
        {
            menu();
            break;

        }
        else
        {
            cout << "\t\t\t\t\t**** try again later!! **** \n\n";

            user.close();
            on_off = false;
        }

 
    }

}

//REGISTRATION
void registration()
{
    string Newname, Checkname, Newpass, Checkpass;
    int minipass;
    bool if_on = true;
    bool oo = true;

    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t\t**** Create New Account ****  \n";
    cout << "\t\t\t\t----------------------------------------------\n";

    //validation of username
    while (oo)
    {
        cout << "Enter new username: ";
        getline(cin, Newname);
        minipass = Newname.length();
        fstream nusers;
        nusers.open("Users.txt", ios::in);
        if (if_on && minipass >= 1 && nusers.is_open())
        {
            string reads;
            while (getline(nusers, reads))
            {
                stringstream onlyusers(reads);
                onlyusers >> Checkname;
                if (Newname == Checkname)
                {
                    cout << "\t\t\t>>>>>>" << Newname << " * UserName already exists please try another one <<<<<<\n";

                    if_on = false;
                }
            }
            nusers.close();
            if (!if_on)
            {
                if_on = true;
            }
            else
            {
                oo = false;
            }
        }

    }
    //Validation of Password
    while (true)
    {
        cout << "Enter new password:";
        getline(cin, Newpass);
        cout << "Confirm the password:";
        getline(cin, Checkpass);
        minipass = Newpass.length();

        if (minipass < 5)
        {
            cout << "\t\t\t\t\t>>>>>> Password Weak! <<<<<< \n";
            cout << "\t\t\t\t>>>>>> Password must at least 5 characters! <<<<<<\n";
        }
        else if (Checkpass == Newpass)
        {
            fstream users;
            users.open("Users.txt", ios::app);
            if (users.is_open())
            {
                users << Newname + " " + Newpass << endl;
                users.close();
            }
            cout << "\t\t\t\t\t\t Created successfully ! \n \n";

            break;
        }
        else
        {
            cout << "\t\t\t\t\t Password confirmation not correct! \n \n" << endl;
        }
    }
    login();
}


int main()
{
    string LogorReg;

    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t\tSir Frank's Car Rental System \n";
    cout << "\t\t\t\t\t -----Login or Register-----  \n";
    cout << "\t\t\t\t----------------------------------------------\n";
    cout << "\t\t\t\t Please write * l * to Login or * r * to Register \n\n";

    while (true)
    {
        getline(cin, LogorReg);
        if (LogorReg == "l")
        {
            login();
            break;
        }
        else if (LogorReg == "r")
        {
            registration();
            break;
        }
        else
        {
            cout << "\t\t\t\t Please write * l * to Login or * r * to Register \n\n";
        }

    }
    return 0;
}


