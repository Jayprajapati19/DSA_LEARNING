#include <iostream>

using namespace std;

bool linearSearch(int arr[], int size, int k)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 6, 8};
    int size = 5;

    int key = 6;
    bool ans = linearSearch(arr, size, key);

    if (ans)
    {
        cout << "Present: " << key << endl;
    }
    else
    {
        cout << "Absent: " << key << endl;
    }

    return 0;
}