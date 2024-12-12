#include <iostream>
using namespace std;

vector<int> nextSmallerElement(int *arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        // Store the index of the next smaller element
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
};

vector<int> prevSmallerElement(int *arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        // Store the index of the previous smaller element
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
};

int largestRectangle(int *heights, int n)
{
    // int n = heights.size();

    vector<int> next = nextSmallerElement(heights, n);
    vector<int> prev = prevSmallerElement(heights, n);

    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = heights[i];

        // If next[i] is -1, it means no smaller element to the right
        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newArea = l * b;
        area = max(area, newArea);
    }
    return area;
};

int maxArea(int M[MAX][MAX], int n; int m)
{
    // compute area for first row
    int area = largestRectangle(M[0], m)

        for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // row update: by adding previous row's values
            if (M[i][j] != 0)
                M[0] = M[i][j] + M[i - 1][j];
            else
                M[i][j] == 0;
        }
        // entire row is update now
        int newArea = largestRectangle(M[i], m);
        area = max(area, newArea);
    }
    return area;
}

int main()
{
}

// O(M)