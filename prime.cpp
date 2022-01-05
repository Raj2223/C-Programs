#include <iostream>
using namespace std;

int main()
{
    int a, b, i, n;

    cin >> a >> b;
    cout << endl;
    cout << "prime Numbers" << endl;

    for (int num = a; num <= b; num++)
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                break;
            }
        }
        if (i == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}
