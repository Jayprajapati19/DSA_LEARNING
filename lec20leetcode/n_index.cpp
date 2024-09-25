#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the array after index 'm'
void reverseArray(vector<int> &arr, int m)
{
    int s = m + 1;          // Start after index 'm'
    int e = arr.size() - 1; // End of the array

    while (s <= e)
    {
        swap(arr[s], arr[e]); // Swap elements at positions s and e
        s++;
        e--;
    }
}

int main()
{
    // Predefined array
    vector<int> arr = {1, 2, 3, 4, 5};

    // Predefined index 'm'
    int m = 2;

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Reverse the array after index 'm'
    reverseArray(arr, m);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
