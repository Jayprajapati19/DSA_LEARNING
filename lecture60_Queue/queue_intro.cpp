#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // create a queue

    queue<int> q;
    q.push(11);

    cout << "front of queue is: " << q.front() << endl;

    q.push(15);
    q.push(19);

    cout << "Size of Queue is: " << q.size() << endl;

    q.pop();
    q.pop();
    q.pop();

    cout << "Size of Queue is: " << q.size() << endl;

    if (q.empty())
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue is Empty not empty" << endl;
    }

    return 0;
}