#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack

    stack<int> s;

    // pushh
    s.push(9);
    s.push(19);

    // pop
    s.pop();

    cout << "printing top  element " << s.top() << endl;

    return 0;
}