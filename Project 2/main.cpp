#include <iostream>
#include <windows.h>
using namespace std;
string PIN;
string Money;
int main()

{
    cout << "Welcome!" << endl;
    cout << "Please enter your PIN" << endl;

    cin >> PIN;

    if(PIN=="0563")
    {
        cout << "Correct PIN" << endl;
        cout << "How much money do you want to withdraw" << endl;
        cin >> Money;
        cout << "You chose to withdraw "; cout << Money << " Dollars" << endl;
        cout << "Thank you for using our bank!" << endl;

    }
    else
    {
        cout << "Incorrect PIN" << endl;
        cout << "Please check your PIN and try again" << endl;

    }

    return 0;

}
