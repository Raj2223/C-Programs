#include <iostream>
using namespace std;

int main()
{
    float a, b;
    cout << endl;
    cout << "Input 2 No. " << endl;
    cin >> a >> b;

    cout<<"a for Addition\ns for substraction\nm for multiplication\nd for devision\n";

    char op;
    cout << "Input an Operation ";
    cin >> op;

    switch (op)
    {
    case 'a':
        cout << a + b << endl;
        break;

    case 's':
        cout << a - b << endl;
        break;

    case 'm':
        cout << a * b << endl;
        break;

    case 'd':
        cout << a / b << endl;
        break;

    default:
        cout << "Invalid Operation" << endl;
        break;
    }

    return 0;
}