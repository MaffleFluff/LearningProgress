#include <iostream>

using namespace std;
float grades[5]; int suma, avarage;
int main()
{


    for (int i=0; i<5; i++)
    {
        cout << "Please write your " << i+1 << " grade" <<endl;

        cin >> grades[i];

        suma+=grades[i];

    }

    avarage = suma/5;

    cout << "Your avarage grade is: " << avarage << endl;
    return 0;
}
