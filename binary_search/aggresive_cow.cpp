#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid, int n)
{
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 1; i < n; i++)
    { // Start from the second stall
        if (stalls[i] - lastPos >= mid)
        {
            cowCount++;
            if (cowCount == k)
            {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int n = stalls.size();
    int e = stalls[n - 1] - stalls[0]; // Maximum distance
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (isPossible(stalls, k, mid, n))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> stalls = {18, 27, 44, 77, 69, 19, 35, 83, 9, 64};
    int k = 3;
    int result = aggressiveCows(stalls, k);
    cout << "The largest minimum distance is: " << result << endl;
    return 0;
}