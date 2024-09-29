#include <iostream>

using namespace std;
bool isPresent(int arr[][3], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// print row wise sum
// void printSum(int arr[][3], int row, int col)
// {
//     cout << "Printing the sum -> " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             sum += arr[i][j];
//         }
//         cout << sum << " ";
//     }
//     cout << endl;
// }

// print Col wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "Printing the sum -> " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main()
{
    // creation of 2D Array

    int arr[3][3];
    // int arr[3][3] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

    cout << "Enter the Elements" << endl;
    // input from user -> row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // input from user -> col wise input
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // print results

    cout << "Printing the Array" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter the Element to Search: " << endl;

    int target;

    cin >> target;

    if (isPresent(arr, target, 3, 3))
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    printSum(arr, 3, 3);

    return 0;
}