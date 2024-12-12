#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);         // Initialize stack with -1
    vector<int> ans(n); // Resize ans vector to size n

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        // Store the top of the stack in the answer vector
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main()
{
    // Test the nextSmallerElement function
    vector<int> arr = {4, 8, 5, 2, 25};
    int n = arr.size();

    vector<int> result = nextSmallerElement(arr, n);

    cout << "Next smaller elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
