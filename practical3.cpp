#include<iostream>
using namespace std;

int main()
{
        float f,c;

        cout<<"Enter Temperature in Celsius : ";
        cin>>c;

        f= ((c*9)/5) +32;

        cout <<"Celsius = "<<c<<endl;
        cout <<"Fahrenheit = "<<f<<endl;

    return 0;
}