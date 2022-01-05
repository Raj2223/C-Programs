#include <iostream>
#include <stdio.h>
using namespace std;

struct StudentData
{
    char* stu_name;
    int stu_id;
    int stu_age;
};

int main()
{

    struct StudentData student;
    
    student.stu_name="raj";
    student.stu_id = 1234;
    student.stu_age = 18;

    cout<< "Student Name is : "<<student.stu_name;

    printf("\nStudent Id is: %d", student.stu_id);
    printf("\nStudent Age is: %d", student.stu_age);
    printf("\n");

    return 0;
 
}