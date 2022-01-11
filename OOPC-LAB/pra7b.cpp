#include <iostream>
using namespace std;

class Copy
{
private:
    int a, b;

public:
    Copy(int x, int y)
    {
        a = x;
        b = y;
    }

    Copy(const Copy &copy)
    {
        a = copy.a;
        b = copy.b;
    }

    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

int main()
{
    Copy c1(10, 20);
    Copy c2 = c1;

    cout << endl;
    cout << "P1.x = " << c1.getA() << " P1.y = " << c1.getB() << endl;
    cout << "P1.x = " << c2.getA() << " P1.y = " << c2.getB() << endl;
    cout << endl;

    return 0;
}