#include <iostream>

using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool checkPalindrom(char a[], int n)
{
    int s = 0;
    int e = n - 1;

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

char toLowerCase(char ch)
{
    if (ch <= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int main()
{
    char name[20];

    cout << "Enter your name: ";
    cin >> name;
    // name[2] = '\0';

    cout << "your name is: " << endl;
    cout << name << endl;

    int len = getLength(name);

    cout << "Length : " << len << endl;
    reverse(name, len);
    cout << "your name is: " << endl;
    cout << name << endl;

    cout << "Palindrom Or Not: " << checkPalindrom(name, len) << endl;

    cout << "CHARCTER is " << toLowerCase('b') << endl;
    cout << "CHARCTER is " << toLowerCase('D') << endl;
}

// cin -> execution ko stop kar deta hai jab space, tab and new line/enter dete hai