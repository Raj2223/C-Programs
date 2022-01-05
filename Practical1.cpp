#include<iostream>
using namespace std;

Class Stu{

   public:
    int display()
    {
        
    char* name,address;
    int rollno;

    cout<<"enter your name : ";
    cin>>name;
    cout<<"enter your Roll Number : ";
    cin>>rollno;
    cout<<"enter your Address: ";
    cin>>address;

    return 0;
    }

};

int main()
{
    Stu student;

    student.display();
    cout<<"Details of Student 1";

    return 0;
}