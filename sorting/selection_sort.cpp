#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])

                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Space complexity O(1)

// Time Complexity O(n)^2

// Best Case -> already sorted O(n)^2

// worst Case  O(n)^2

int main()
{
    // int arr[] = {64, 25, 12, 22, 11};
    int arr[] = {3, 19, 9, 5, 0, 4, 6, 7};

    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}