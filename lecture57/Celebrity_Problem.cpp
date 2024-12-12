#include <iostream>

using namespace std;

// do using another approach

// everyone knows celebrity
// celebritiy known no-ons

bool knows(vector<vector<int>> &M, int a, int b, int n)
{
    if (M[a][b] == 1)
        return true;
    else
    {
        return false;
    }
}

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i +)
    {
        // step 1: push all elements in the stack
        s.puch(i);
    }

    // step 2: get 2 element and compare th
    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();

        int b = s.top();
        s.pop();

        if (knows(a, b))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }

    int candidate = s.top();
    // step 3: single element in stack is potational celebrity
    // so verify it.

    // bool rowCheck = false;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[candidate][i] == 0)
        {
            zeroCount++;
        }

        // all zeros
        if (zeroCount != n)
            return -1;
        // {
        //     rowCheck = true;
        // }

        // columnCheck
        // bool colCheck = false;
        int oneCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[i][candidate] == 1)
            {
                oneCount++;
            }

            if (oneCount != n - 1)
                return -1;

            return ans;
            // {
            //     colCheck = true;
            // }

            // if (rowCheck == true && colCheck == true)
            // {
            //     return candidate;
            // }
            // else
            // {
            //     return -1;
            // }
        }
    }
    int main()
    {
        return 0;
    }
}