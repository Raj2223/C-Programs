#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, i, n, sum = 0;

    cin >> n;

    cout << "o\n1\n";

    for (i = 1; i < n; i++)
    {
        a = b;
        b = sum;
        sum = a + b;

        cout << sum << endl;
    }

    return 0;
}