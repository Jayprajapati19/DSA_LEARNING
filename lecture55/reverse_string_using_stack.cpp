#include <iostream>
#include <stack>

using namespace 0std;

int main()
{
    string str = "DevJay";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    return 0;
}