#include <iostream>

using namespace std;

int uczniowie,cukierki,x,y;
int main()
{
    cout << "Ilosc uczniow w klasie:";
    cin>>uczniowie;

    cout<<"Ile mama kupila cukierkow;";
    cin>>cukierki;

    x = cukierki/(uczniowie-1);
    cout<<"Ilosc cukierkow na ucznia:"<<x;

    y = cukierki-x*(uczniowie-1);
    cout<<endl<<"Ile cukierkow zostanie Jasiowi:"<<y;

    return 0;
}
