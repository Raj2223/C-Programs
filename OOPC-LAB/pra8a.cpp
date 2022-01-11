#include <bits/stdc++.h>

using namespace std;

class add
{
public:
    add operator++(int x)
    {
        cin >> x;
        x = ++x;
        cout << x;
        cout << endl;
    }
};

int main()
{
    add a1;
    a1++;

    return 0;
}