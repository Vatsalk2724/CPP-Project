//PROJECT-1
//LOGIN AND REGISTRATION FORM IN C++


#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void login();
void registration();
void forgot();




int main(){


int c;
cout<<"\t\t\t___________________________________\n\n\n";
cout<<"\t\t\t   Welcome To Login Page           \n\n\n";
cout<<"\t\t\t__________   MENU    _______________\n\n\n";
cout<<"\t| Press 1 to LOGIN                       |"<<endl;
cout<<"\t| Press 2 to REGISTER                    |"<<endl;
cout<<"\t| Press 3 if you forget your PASSWORD    |"<<endl;
cout<<"\t| Press 4 to EXIT                        |"<<endl;
cout<<"\n\t\t\t| Press enter your choice : ";
cin>>c;
cout<<endl;

switch (c)
{
case 1:
    login();
    break;
case 2:
    registration();
    break;
case 3:
    forgot();
    break;
case 4:
    cout<<"\t\t\t Thankyou1 \n\n";
    break;
default:
    system("cls");
    cout<<"\t\t\t Please select from the options given above \n"<<endl;
    main();

}

}

void login()
{
    int count;
    string userId,password,Id,pass;
    system("cls");
    cout<<"\t\t\t please enter the username and password : "<<endl;
    cout<<"\t\t\t USERNAME";
    cin>>userId;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;

    ifstream input("records.txt");

    while(input>>Id>>pass)
    {
        if (Id==userId && pass==password)
        {
            count=1;
            system("cls");

        }
        
    }
    input.close();

     if(count==1)
     {
        cout<<userId<<"\n your LOGIN is successfull \n Thanks for Logging in | \n";
        main();
     }
     else{
        cout<<"\n LOGIN ERROR \n please check your username \n";
        main();
     }


}

void registration()
{
    string ruserId,rpassword,rId,rpass;
    system("cls");
    cout<<"\t\t\t Enter The Username : ";
    cin>>ruserId;
    cout<<"\t\t\t Enter The Password : ";
    cin>>rpassword;

     ofstream f1("records.txt", ios::app);
     f1<<ruserId<<' '<<rpassword<<endl;
     system("cls");
     cout<<"\n\t\t\t Registration is successfull! \n";
     main();


}
void forgot()
{
    int option;
    system("cls");
    cout<<"\t\t\t You forget the password ? No worries \n";
    cout<<"Press 1 to search your id by username "<<endl;
    cout<<"Press 2 to go back to main menu "<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;
    switch(option)
    {

        case 1:
        {
            int count=0;
            string suserId,sId,spass;
            cout<<"\n\t\t\tEnter the username which you remembered ;";
            cin>>suserId;

            ifstream f2("records.txt");
            while(f2>>sId>>spass)
            {
                if(sId==suserId)
                {
                    count=1;
                }
            }
            f2.close();
            if(count==1)
            {
                cout<<"\n\n Your account is found! \n";
                cout<<"\n\n Your password is : "<<spass;
                main();

            }
            else{
                cout<<"\n\t Sorry! your account is not found! \n";
                main();
            }

        }
        case 2 :
        {
            main();
        }
        default:
             cout<<"\t\t\t Wrong choice ! Please try again "<<endl;
             forgot();    

}

}
