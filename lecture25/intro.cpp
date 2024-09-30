#include <iostream>

using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    // address of operator - &

    cout << "address of num: " << &num << endl;

    int *ptr = &num;

    cout << "Addredd is: " << ptr << endl;

    cout << "value is: " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address of d: " << p2 << endl;
    cout << "Value is: " << *p2 << endl;

    cout << "Size of Integer is " << sizeof(num) << endl;
    cout << "Size of Pointer is " << sizeof(ptr) << endl;

    cout << "Size of Pointer is " << sizeof(p2) << endl;

    return 0;
}