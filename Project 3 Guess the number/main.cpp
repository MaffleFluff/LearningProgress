#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
int number, guess, tries=0;
int main()
{
    cout << "Hello, guess what number I thought about from 1-100" << endl;
    srand(time(NULL));
    number = rand()%100+1;
    while(guess!=number)
    {
        tries++;
        cout << "Write your guess" << " It's your " << tries << " try" << endl;
        cin>>guess;


        if(guess==number)

         cout << "Good job, you won!" << endl;


        else if (guess>number)

            cout << "It's too much!" << endl;
        else if (guess<number)

            cout << "It's too little " << endl;
        }

        system("pause");


     return 0;
}





