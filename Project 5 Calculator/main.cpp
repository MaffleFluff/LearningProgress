#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <math.h>>
using namespace std;
float x,y;
char choose;
int main()
{
  for (;;)
  {


      cout << "Calculator Main Menu" << "\n";
      cout << "--------------------" << "\n";
      cout << "1. Addition" << "\n";
      cout << "2. Subtraction" << "\n";
      cout << "3. Multiplication" << "\n";
      cout << "4. Division" << "\n";
      cout << "5. Exponentiation" << "\n";
      cout << "6. Root of degree"  <<   "\n";
      cout << "7. End Program" << "\n";
      cout << endl;


      cout << "Choose program: " << "\n";
      choose=getch();

      cout << "First number: ";
      cin >> x;
      cout << "Second number: ";
      cin >> y;
    if(!(x, y))
    {
        cerr << "It's not a number!";
        exit(0);
    }
      cout << endl;
      switch (choose)
      {
          case '1':
          cout << "It's equal: " << x+y;
          break;

          case '2':
          cout << "It's equal: " <<  x-y;
          break;

          case '3':
          cout <<  "It's equal: " <<  x*y;
          break;

          case '4':

          if (y==0)
          {
              cout << "U can't division with 0!" << "\n";
          }
          else
          {
              cout << "It's equal: " << x/y;
          }
          break;

          case '5':
          cout << "It's equal: " << pow(x, y);
          break;

          case '6':
          cout << "It's equal: " <<  pow(x, (1/y));
          break;

          case '7':
          cout << "Goodbye, let's count togather again.";
          exit (0);
          break;

          default: cout << "There is no option like that!";

      }
            getchar(); getchar();
            system("cls");
  }
          return 0;
}

