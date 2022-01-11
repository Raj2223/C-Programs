#include <bits/stdc++.h>
using namespace std;

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

    cout << "Sorted array: \n";

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[100], n;

    cout << "Enter number of elements\n";
    cin >> n;

    cout << "Enter " << n << "Numbers\n";

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    selectSort(arr, n);

    return 0;
}