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

    cout << "Sorted array using Insertion sort: \n";
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

    cout << "Sorted array using Bubble sort: \n";

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

    cout << "Sorted array using Selection sort: \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[100];
    int i, n;

    cout << "Enter number of elements\n";
    cin >> n;
    cout << "Enter " << n << " numbers \n";

    for (i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);
    bubbleSort(arr, n);
    selectSort(arr, n);

    return 0;
}
