#include<iostream>
using namespace std;

void sort(int *ptr , int len);

void intersection(int set1[] , int set2[] , int len_set1 , int len_set2);

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

    intersection(set1 , set2 , len_set1 , len_set2);
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

void intersection(int set1[] , int set2[] , int len_set1 , int len_set2)
{
    int intersection_set[20] , k = 0;

    for (int i = 0; i < len_set1; i++)
    {
        for (int j = 0; j < len_set2; j++)
        {       
            if (set1[i] == set2[j])
            {
                intersection_set[k] = set1[i];
                k++;
            }
            
        }
        
    }

    cout << endl << "Intersection set of set 1 and set 2 is : { ";
    displaySet(intersection_set , k);
    
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