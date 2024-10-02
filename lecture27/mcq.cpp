#include <iostream>

using namespace std;

int main()
{
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p;

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout << a << " " << b << endl;

    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout << *ptr << endl;

    //     int b = 10;
    // int *a = &b;

    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout << a << "  " << *c << endl;

    // int a[] = {1, 2, 3, 4};
    // cout << *(a) << " " << *(a + 1);

    // int arr[] = {4, 5, 6, 7};
    // int *p = (arr + 1);
    // cout << *arr;
    // return 0;

    // char s[] = "hello";
    // char *p = s;
    // cout << s[0] << " " << p[0];

    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout << *ptr2 << " ";
    cout << ptr2 - ptr1;
    return 0;
}