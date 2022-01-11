#include <bits/stdc++.h>
using namespace std;

class Date
{
public:
    Date(int x, int y, int z)
    {
        cout << "Date : " << x << "-" << y << "-" << z;

        cout << endl;
    }
};

int main()
{
    Date d1(12, 02, 2019);
    Date d2(15, 03, 2019);

    return 0;
}