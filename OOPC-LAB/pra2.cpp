#include <iostream>
using namespace std;

class Demo
{
public:
    int age;
    void getdata()
    {

        cout << "Enter age ";
        cin >> age;
        cout << endl;
    }

    void disData()
    {
        cout << age << endl;
    }
};

int main()
{
    int count = 0;
    Demo d[4];

    for (int i = 0; i < 4; i++)
    {
        d[i].getdata();
    }
    for (int i = 0; i < 4; i++)
    {

        cout << " Age of person " << ++count << " :";
        d[i].disData();
    }

    return 0;
}