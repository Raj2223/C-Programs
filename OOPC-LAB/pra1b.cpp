#include <iostream>
#include <conio.h>
using namespace std;

class StudentData
{

    char stu_name[20];
    int stu_id;
    float stu_spi;

public:
    int student()
    {
        cout << "Enter Name :";
        cin >> stu_name;

        cout << "Enter ID :";
        cin >> stu_id;

        cout << "Enter SPI :";
        cin >> stu_spi;

        cout << "Name: " << stu_name << endl;
        cout << "ID: " << stu_id << endl;
        cout << "SPI: " << stu_spi << endl;

        return 0;
    }
};

int main()
{
    StudentData S1, S2, S3;

    S1.student();
    S2.student();
    S3.student();

    return 0;
}