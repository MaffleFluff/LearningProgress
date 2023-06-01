#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>
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
      cout << "5. End Program" << "\n";

      cout << endl;


      cout << "Choose program: " << "\n";
      choose=getch();

      cout << "First number: ";
      cin >> x;
      cout << "Second number: ";
      cin >> y;

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

