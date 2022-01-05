#include <iostream>
using namespace std;

int add(int a, int b);
int mul(int *a, int *b);

int main()
{
    int x, y, addition, multi;

    cout << endl;

    cout << "Enter 2 Numbers " << endl;
    cin >> x >> y;

    addition = add(x, y);
    cout << "Addition of 2 No. is " << addition << endl;

    multi = mul(&x, &y);
    cout << "Multiplicaton of 2 No. is " << multi << endl;
    cout << endl;

    return 0;
}

int add(int a, int b)
{
    int addition;

    addition = a + b;

    return addition;
}
int mul(int *x, int *y)
{
    int multi;

    multi = *x * *y;

    return multi;
}