#include <iostream>
using namespace std;

void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            // shift element
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                // stop if element is smaller than or equal to temp
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    // Define the array for insertion
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call insertionSort function
    insertionSort(n, arr);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
