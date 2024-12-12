#include <iostream>
#include <stack>
using namespace std;

// convert to vscode runable formate

int findMinimumCost(string str)
{
    // odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    // remove valid part
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            // ch is  close brace -> ')'
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    // stack contains invalid expressions now
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}

int main()
{

    return 0;
}