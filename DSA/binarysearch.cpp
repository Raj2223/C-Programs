#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int high, low = 0;
    high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid + 1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, key;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter No. to search = ";
    cin >> key;

    cout << "At Position " << binarysearch(arr, n, key) << endl;

    return 0;
}