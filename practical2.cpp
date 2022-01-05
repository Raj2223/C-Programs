#include<iostream>
using namespace std;

int main()
{
    int x,m,d;

    cout<<"Enter No. of Days : ";
    cin>>x;

    m=x/30;
    d=x%30;

    cout<<m<< " Months and "<<d<<" Days"<<endl;


    return 0;
}