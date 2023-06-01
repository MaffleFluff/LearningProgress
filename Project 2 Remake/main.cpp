#include <iostream>
#include <windows.h>
using namespace std;
string PIN;
int Money, Try=1;
int main()

{
     cout << "Welcome!" << endl;
    while (Try <= 3)
       {

            cout << "Please enter your PIN" << endl;
            cin >> PIN;

        if(PIN!="0563")
    {
            cout << "Incorrect PIN" << endl;
            cout << "Please check your PIN and try again" << endl;
        Try++;
            cout << "It's your " << Try-1 << " out of 3 tries and your bank account will be blocked" << endl;


    }
    else
    {

        cout << "Correct PIN" << endl;
        cout << "How much money do you want to withdraw" << endl;
        cin >> Money;
        cout << "You chose to withdraw "; cout << Money << " Dollars" << endl;
        cout << "Thank you for using our bank!" << endl;

        return 0;

    }

       }


    return 0;
}

