#include <iostream>

using namespace std;

bool checkPalindrom(string str, int i, int j)
{
    // base case

    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
    {
        // recursive call
        return checkPalindrom(str, i + 1, j - 1);
    }
}

int main()

{

    string name = "abbccbba";
    cout << endl;

    bool isPalindrom = checkPalindrom(name, 0, name.length() - 1);

    if (isPalindrom)
    {
        cout << " It Is a Palindrom " << endl;
    }
    else
    {
        cout << "It is not a Palindrom " << endl;
    }
}