#include <bits/stdc++.h>

using namespace std;

class add
{
private:
    int x, y;

public:
    add operator+(int n)
    {
        int sum = 0;

        cin >> x >> y;
        sum = x + y;

        cout << sum;
        cout << endl;
    }
};

int main()
{
    add a1;
    a1 + (5);

    return 0;
}