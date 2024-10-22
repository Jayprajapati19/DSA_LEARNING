#include <iostream>
using namespace std;

class Solution
{
private:
    void solve(int nums[], int ans[][10], int &row, int size, int index)
    {
        // base case
        if (index >= size)
        {
            for (int i = 0; i < size; i++)
            {
                ans[row][i] = nums[i];
            }
            row++;
            return;
        }

        for (int j = index; j < size; j++)
        {
            swap(nums[index], nums[j]);
            solve(nums, ans, row, size, index + 1);
            // backtrack
            swap(nums[index], nums[j]);
        }
    }

public:
    void permute(int nums[], int size)
    {
        int ans[100][10]; // Fixed size for storing results (adjust if necessary)
        int row = 0;
        solve(nums, ans, row, size, 0);

        // Print permutations
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Solution sol;
    int nums[] = {4, 5, 9}; // Example input
    int size = sizeof(nums) / sizeof(nums[0]);

    sol.permute(nums, size);

    return 0;
}