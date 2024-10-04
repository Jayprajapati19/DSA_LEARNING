#include <iostream>

using namespace std;

int main()
{
    int i = 5;

    // ref varible
    int &j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;

    // 5min
}