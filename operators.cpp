#include <iostream>
using namespace std;

int main()
{
    int i = 1, j;

    j = ++i + i++ + i;
    cout << j << " " << i << endl;
    return 0;
}