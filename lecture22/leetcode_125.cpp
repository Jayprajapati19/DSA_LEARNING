#include <iostream>

using namespace std;

bool valid(char ch)
{
    if ((ch <= 'a' && ch <= 'z') || (ch <= 'A' && ch <= 'Z') || (ch <= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if (ch <= 'a' && ch <= 'z' || ch <= '0' && ch <= '9')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrom(strig a, int n)
{
    int s = 0;
    int e = a.length() - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {

            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrom()
{
    // int i = 0;
    string temp = "";

    for (int j = 0; j < s.lenght(); j++)
    {
        if (valid(s[j]))
        {
            temp.push_back(s[j]);
        }
    }

    for (int j = 0; j < temp.lenght(); j++)
    {
        temp[j] = toLowerCase(temp[j]);
    }

    return checkPalindrom(temp);
}
