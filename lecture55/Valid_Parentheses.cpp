#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> st; // Renamed stack to `st` to avoid conflict
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // If opening bracket, push into stack
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            // For closing bracket
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false; // Mismatch
                }
            }
            else
            {
                return false; // Stack empty but closing bracket found
            }
        }
    }

    // If stack is empty, all brackets matched
    return st.empty();
}

int main()
{
    string test = "{[()]}";

    if (isValid(test))
    {
        cout << "The string is valid." << endl;
    }
    else
    {
        cout << "The string is invalid." << endl;
    }

    return 0;
}
