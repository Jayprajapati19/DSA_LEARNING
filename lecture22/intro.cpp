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
}

// cin -> execution ko stop kar deta hai jab space, tab and new line/enter dete hai