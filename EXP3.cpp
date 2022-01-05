#include<iostream>
using namespace std;

void sort(int *ptr , int len);

void complement(int universal[] , int set1[] , int len_universal , int len_set1);

void displaySet(int set[] , int len);

int main()
{
    int universal[20] , set1[20] , len_universal , len_set1;

    cout << endl << "Enter the size (number of elements) of universal set : ";
    cin >> len_universal;

    cout << endl << "Enter the size (number of elements) of set 1 : ";
    cin >> len_set1;

    cout << endl << "Enter the elements of universal set : " << endl;
    for (int i = 0; i < len_universal; i++)
    {
        cin >> universal[i];
    }

    cout << endl << "Enter the elements of set 1 : " << endl;
    for (int i = 0; i < len_set1; i++)
    {
        cin >> set1[i];
    }
    
    sort(universal , len_universal);

    sort(set1 , len_set1);

    cout << endl << "universal set : { ";
    displaySet(universal , len_universal);

    cout << endl << "set 1 : { ";
    displaySet(set1 , len_set1);

    complement(universal , set1 , len_universal , len_set1);
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

void complement(int universal[] , int set1[] , int len_universal , int len_set1)
{
    int complement_set[20] , k = 0 , flag = 1;

    for (int i = 0; i < len_universal; i++)
    {
        for (int j = 0; j < len_set1; j++)
        {       
            if (universal[i] == set1[j])
            {
                flag = 0;
                break;    
            }
            
        }

        if (flag == 1)
        {
            complement_set[k] = universal[i];
            k++;
        }
        flag = 1;
        
    }

    cout << endl << "Complement set of set 1 with respect to Universal set : { ";
    displaySet(complement_set , k);
    
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