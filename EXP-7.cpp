#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

void displaySet(char set[] , int len);

void powerset(char *set, int set_size);

int main()
{
    int len_set1;
    char set1[50];

    cout << endl << "Enter the size (number of elements) of set 1 : ";
    cin >> len_set1;

    cout << endl << "Enter the elements of set 1 : " << endl;
    for (int i = 0; i < len_set1; i++)
    {
        cin >> set1[i];
    }

    cout << endl << "set 1 : { ";
    displaySet(set1 , len_set1);

    cout << endl << "Powerset of set 1 is : { ' '";
    powerset(set1 , len_set1);
    cout << " }";

    getch();
    return 0;
}

void powerset(char *set, int set_size)
{
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
 
    for(counter = 1; counter < pow_set_size; counter++)
    {
        cout << " , ";
        for(j = 0; j < set_size; j++)
        {
            if(counter & (1 << j))
                cout << set[j];
        }
    }
}

void displaySet(char set[] , int len)
{
    int k = 1;
    cout << set[0];
    while (k < len)
    {
        cout << " , " << set[k];
        k++;
    }
    cout << " } " << endl;
}