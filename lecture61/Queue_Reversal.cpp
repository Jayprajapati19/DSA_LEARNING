#include <iostream>
#include <queue>

using namespace std;

queue<int> rev(queue<int> q)
{
    stack<int> s;

    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while (!s.emptys())
    {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    return q;
}

int main()
{
}