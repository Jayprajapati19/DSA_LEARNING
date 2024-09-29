#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int startingRow = 0;
        int startingCol = 0;
        int endingCol = col - 1;
        int endingRow = row - 1;

        int count = 0;
        int total = row * col;

        while (count < total)
        {

            // printing starting row
            for (int index = startingCol; count < total && index <= endingCol; index++)
            {
                ans.push_back(matrix[startingCol][index]);
                count++;
            }
            startingRow++;

            // printing ending column
            for (int index = startingRow; count < total && index <= endingRow; index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            // printing ending row
            for (int index = endingCol; count < total && index >= startingCol; index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;

            // printing starting column
            for (int index = endingRow; count < total && index >= startingRow; index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

int main()
{
    int nRows, mCols;

    // Input number of rows and columns
    cout << "Enter number of rows: ";
    cin >> nRows;

    cout << "Enter number of columns: ";
    cin >> mCols;

    // Declare 2D array
    vector<vector<int>> matrix(nRows, vector<int>(mCols));

    // Input elements of the 2D array
    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Create an object of Solution class
    Solution sol;

    // Get the spiral order result
    vector<int> result = sol.spiralOrder(matrix);

    // Display the result
    cout << "Spiral order of the array is: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
