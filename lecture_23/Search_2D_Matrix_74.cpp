#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row * col - 1;

        int mid = start + (end - start) / 2;

        while (start <= end)
        {
            int element = matrix[mid / col][mid % col];

            if (element == target)
            {
                return true;
            }
            else if (element < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }

            mid = start + (end - start) / 2;
        }

        return false;
    }
};

int main()
{
    // Initialize a 2D matrix
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    // Input the target value to search for
    int target;
    cout << "Enter the target value to search in the matrix: ";
    cin >> target;

    // Create an object of the Solution class
    Solution sol;

    // Call the searchMatrix function
    bool result = sol.searchMatrix(matrix, target);

    // Output the result
    if (result)
    {
        cout << "Element found in the matrix." << endl;
    }
    else
    {
        cout << "Element not found in the matrix." << endl;
    }

    return 0;
}
