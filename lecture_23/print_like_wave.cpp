#include <iostream>
#include <vector>
using namespace std;

// Function to print the wave pattern of a 2D array
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for (int j = 0; j < mCols; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < nRows; i++)
            {
                ans.push_back(arr[i][j]);
            }
        }
        else
        {
            for (int i = nRows - 1; i >= 0; i--)
            {
                ans.push_back(arr[i][j]);
            }
        }
    }
    return ans;
}

int main()
{
    int nRows, mCols;

    // Input number of rows and columns
    cout << "Enter number of rows: ";
    cin >> nRows;

    cout << "Enter number of columns: ";
    cin >> mCols;

    // Declare 2D array
    vector<vector<int>> arr(nRows, vector<int>(mCols));

    // Input elements of the 2D array
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Get the wave print result
    vector<int> result = wavePrint(arr, nRows, mCols);

    // Display the result
    cout << "Wave print of the array is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
