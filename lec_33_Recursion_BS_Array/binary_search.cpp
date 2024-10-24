#include <iostream>

using namespace std;
void print(int arr[], int s, int e)
{
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k)
{
    // cout << endl;
    // print(arr, s, e);

    // base case
    // element not  found
    if (s > e)
    {
        return false;
    }

    int mid = s + (e - s) / 2;
    // cout << "value of arr mid is: " << arr[mid] << endl;

    // element found
    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] < k)
    {
        return binarySearch(arr, mid + 1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main()

{

    int arr[6] = {2, 3, 4, 6, 8, 9};
    int size = 6;
    int key = 4;

    cout << "Present Or Not " << binarySearch(arr, 0, 5, key) << endl;

    return 0;
}