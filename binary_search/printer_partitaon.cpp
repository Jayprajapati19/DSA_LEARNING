#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &boards, int n, int k, int mid)
{
    int painterCount = 1;
    int timeSpent = 0;

    for (int i = 0; i < n; i++)
    {
        if (timeSpent + boards[i] <= mid)
        {
            timeSpent += boards[i];
        }
        else
        {
            painterCount++;
            if (painterCount > k || boards[i] > mid)
            {
                return false;
            }
            timeSpent = boards[i];
        }
    }
    return true;
}

int allocateBoards(vector<int> &boards, int n, int k)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += boards[i]; // Calculate the total length of boards
    }

    int e = sum; // The maximum possible time is the sum of all boards
    int ans = -1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2; // Find the mid value
        if (isPossible(boards, n, k, mid))
        {
            ans = mid;   // Found a possible solution
            e = mid - 1; // Try for a smaller time
        }
        else
        {
            s = mid + 1; // Increase time
        }
    }
    return ans; // Return the minimum time required
}

int main()
{
    vector<int> boards = {5, 5, 5, 5}; // Example board lengths
    int n = boards.size();
    int k = 2; // Number of painters

    int result = allocateBoards(boards, n, k);
    cout << "Minimum time to paint all boards: " << result << endl;

    return 0;
}
