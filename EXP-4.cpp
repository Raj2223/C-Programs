#include<iostream>
#include<conio.h>

using namespace std;

void sort(int *ptr , int len);

void difference(int setA[] , int setB[] , int len_setA , int len_setB);

void displaySet(int set[] , int len);

int main()
{
    int setA[20] , setB[20] , len_setA , len_setB;

    cout << endl << "Enter the size (number of elements) of set A : ";
    cin >> len_setA;

    cout << endl << "Enter the size (number of elements) of set B : ";
    cin >> len_setB;

    cout << endl << "Enter the elements of set A : " << endl;
    for (int i = 0; i < len_setA; i++)
    {
        cin >> setA[i];
    }

    cout << endl << "Enter the elements of set B : " << endl;
    for (int i = 0; i < len_setB; i++)
    {
        cin >> setB[i];
    }
    
    sort(setA , len_setA);

    sort(setB , len_setB);

    cout << endl << "set A : { ";
    displaySet(setA , len_setA);

    cout << endl << "set B : { ";
    displaySet(setB , len_setB);

    difference(setA , setB , len_setA , len_setB);

    getch();
    return 0;
}

void sort(int *ptr , int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (*(ptr+i) > *(ptr+j))
            {
                int temp = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp;
            }
            
        }
        
    }
    
}

void difference(int setA[] , int setB[] , int len_setA , int len_setB)
{
    int difference_set[20] , k = 0 , choice , flag = 1;

    cout << endl << "1.) A - B" << endl << "2.) B - A" << endl;
    cout << "Select any one operation from above list : ";
    cin >> choice;

    if (choice == 1)
    {
        for (int i = 0; i < len_setA; i++)
        {
            for (int j = 0; j < len_setB; j++)
            {
                if (setA[i] == setB[j])
                {
                    flag = 0;
                    break;
                }
                
            }
            
            if (flag == 1)
            {
                difference_set[k] = setA[i];
                k++;
            }
            flag = 1;
            
        }   

        cout << endl << "difference set of set A and set B (A - B) is : { ";
        displaySet(difference_set , k);       
    }
    else
    {
        for (int i = 0; i < len_setB; i++)
        {
            for (int j = 0; j < len_setA; j++)
            {
                if (setA[j] == setB[i])
                {
                    flag = 0;
                    break;
                }
                
            }
            
            if (flag == 1)
            {
                difference_set[k] = setB[i];
                k++;
            }
            flag = 1;
            
        }

        cout << endl << "difference set of set A and set B (B - A) is : { ";
        displaySet(difference_set , k);
    }
    
}

void displaySet(int set[] , int len)
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

