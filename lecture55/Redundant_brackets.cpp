#include <iostream>
#include <stack>
using namespace std;

// convert in vscode runable formate

bool findRedudantBrackets(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // ch ya to ')' bracket hai ya tohh lowercase letter haii
            if (ch == ')')
            {

                bool isRedundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
};

int main()
{

    return 0;
}