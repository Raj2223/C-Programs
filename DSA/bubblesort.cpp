#include <bits/stdc++.h>
using namespace std;

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

    bubbleSort(arr, n);

    return 0;
}