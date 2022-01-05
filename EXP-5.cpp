#include<iostream>
#include<conio.h>

using namespace std;

void sort(int *ptr , int len);

void symmetric_diff(int set1[] , int set2[] , int len_set1 , int len_set2);

void displaySet(int set[] , int len);

int main()
{
    int set1[20] , set2[20] , len_set1 , len_set2;
 
    cout << endl << "Enter the size (number of elements) of set 1 : ";
    cin >> len_set1;

    cout << endl << "Enter the size (number of elements) of set 2 : ";
    cin >> len_set2;

    cout << endl << "Enter the elements of set 1 : " << endl;
    for (int i = 0; i < len_set1; i++)
    {
        cin >> set1[i];
    }

    cout << endl << "Enter the elements of set 2 : " << endl;
    for (int i = 0; i < len_set2; i++)
    {
        cin >> set2[i];
    }
    
    sort(set1 , len_set1);

    sort(set2 , len_set2);

    cout << endl << "set 1 : { ";
    displaySet(set1 , len_set1);

    cout << endl << "set 2 : { ";
    displaySet(set2 , len_set2);

    symmetric_diff(set1 , set2 , len_set1 , len_set2);

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

void symmetric_diff(int set1[] , int set2[] , int len_set1 , int len_set2)
{
    int symmetric_diff_set[40] , k = 0 , flag = 1;

    for (int i = 0; i < len_set1; i++)
    {
        for (int j = 0; j < len_set2; j++)
        {       
            if (set1[i] == set2[j])
            {
                flag = 0;
                break;
            }
            
        }
        
        if (flag == 1)
        {
            symmetric_diff_set[k] = set1[i];
            k++;
        }
        flag = 1;
        
    }

    for (int i = 0; i < len_set2; i++)
    {
        for (int j = 0; j < len_set1; j++)
        {       
            if (set1[j] == set2[i])
            {
                flag = 0;
                break;
            }
            
        }

        if (flag == 1)
        {
            symmetric_diff_set[k] = set2[i];
            k++;
        }
        flag = 1;
    
    }

    sort(symmetric_diff_set , k);

    cout << endl << "symmetric difference set of set 1 and set 2 is : { ";
    displaySet(symmetric_diff_set , k);
    
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