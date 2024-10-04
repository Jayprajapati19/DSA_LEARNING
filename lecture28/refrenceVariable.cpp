#include <iostream>

using namespace std;

// int &func(int a)
// {
//     int num = a;
//     int &ans = num;
//     return ans;
// }

int *func(int n)
{
    int *ptr = &n;
    return ptr;
}

// reference variable me value incremente hongi --> pass by reference nayi memory create nahi hoti
void update2(int &n)
{
    n++;
}

// pass by value me nayi memory create  hotib hai --> variable copy ho jata hai
void update1(int n)
{
    n++;
}

int main()
{

    /*
    int i = 5;

    // ref varible
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    */

    int n = 5;
    cout << "Before " << n << endl;
    update2(n);
    cout << "After  " << n << endl;

    func(n);
}
