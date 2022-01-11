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

    cout << "Sorted array: \n";
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

    return 0;
}
