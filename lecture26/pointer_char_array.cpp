#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[5] = "jpdi";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    // priting intire string
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
}