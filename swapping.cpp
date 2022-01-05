#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    cout << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}