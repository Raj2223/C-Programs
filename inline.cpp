#include <iostream>
using namespace std;

inline int addition(int a, int b);

int main()
{
    int x, r, s;

    cout << "Enter 2 values for Addition \n";
    cin >> r >> s;

    x = addition(r, s);
    cout << x << endl;
    return 0;
}

int addition(int a, int b)
{
    int x;

    x = a + b;

    return x;
}