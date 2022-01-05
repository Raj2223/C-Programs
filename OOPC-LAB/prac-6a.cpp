#include <iostream>
using namespace std;

class Box
{

public:
    void box(int length, int width, int height);
};

void Box::box(int length, int width, int height)
{
    int area = length * width * height;
    cout << "Area = " << area;
    cout << endl;
}

int main()
{
    Box b1, b2;
    b1.box(12, 3, 33);
    b2.box(12, 334, 53);

    return 0;
}