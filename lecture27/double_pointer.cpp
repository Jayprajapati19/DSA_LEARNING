#include <iostream>

using namespace std;

void update(int **p)
{
    // p = p + 1;
    // change hota - NO ?

    // *p = *p + 1;
    // change hota - YES ?

    **p = **p + 1;
    // change hota - YES?
}

int main()
{
    /*

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    int *p = &i;
    int **p2 = &p;

    cout << "Print p" << p << endl;
    // cout << "Address p" << &p << endl;
    // cout << *p2 << endl;

    cout << i << endl;
    cout << *p << endl;

    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << &p << endl;
    cout << p2 << endl;

    cout << endl
         << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "after " << i << endl;
    cout << "after " << p << endl;
    cout << "after " << p2 << endl;

    cout << endl
         << endl;
     */

    int *p = 0;
    int first = 110;
    // *p = first;
    *p = first;
    cout << *p << endl;

    // Pointer ka size hamesh 8 honga
}
