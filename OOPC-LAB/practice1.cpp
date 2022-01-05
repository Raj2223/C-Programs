#include <iostream>
#include <conio.h>

using namespace std;

class raj
{

public:
    int opr(int *x, int *y)
    {
        x++;
        y--;
        cout << x << "  " << y << endl;
        int ans = *x + *y;
        return ans;
    }
};

int main()
{
    raj r1;
    int a, b, sum;

    cin >> a >> b;

    sum = r1.opr(&a, &b);

    cout << "Sum = " << sum << endl;

    return 0;

    getch();
}
