#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {5, 9, 19, 3};

    cout << "First Memory Block is " << arr << endl;
    cout << arr[0] << endl;
    cout << "First Memory Block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
}
