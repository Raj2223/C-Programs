#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    cout << "\nSorted array using Insertion sort: \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    int i, j, swap;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = swap;
            }

    cout << "\nSorted array using Bubble sort: \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void selectSort(int arr[], int n)
{
    int i, j, position, swap;

    for (i = 0; i < n - 1; i++)
    {
        position = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[position] > arr[j])
                position = j;
        }
        if (position != i)
        {
            swap = arr[i];
            arr[i] = arr[position];
            arr[position] = swap;
        }
    }

    cout << "\nSorted array using Selection sort: \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int insertArray(int arr[], int n)
{

	int value;
	cout<<"Enter no of Elements : ";
	cin>>n;

	cout<<"Enter array Elements. \n";
	for(int i=0;i<n;i++)
	{
		cout<<"Index ["<<i<<"] : ";
		cin>>value;
		arr[i] = value;
	}

	return n;
}

int main()
{
    int arr[100];
    int n;

	n = insertArray(arr, n);
    int choice;	

    cout << "\n--- Sorting Methods --- \n1. Insertion sort\n2. Bubble sort\n3. Selection sort \nEnter choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        insertionSort(arr, n);
        break;

    case 2:
        bubbleSort(arr, n);
        break;

    case 3:
        selectSort(arr, n);
        break;

    default:
        cout << "Invalid choice!!";
        break;
    }

    return 0;
}
