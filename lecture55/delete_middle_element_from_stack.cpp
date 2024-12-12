#include <iostream>
#include <stack>

using namespace std;

void solve(stack<int> &inputStack, int count, int size)
{
    // base case
    if (count == size / 2)
    {
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // recursive call
    solve(inputStack, count + 1, size);

    inputStack.push(num);
}

void deletemiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    solve(inputStack, count, N);
}

int main()
{
    stack<int> inputStack;

    // Sample input
    inputStack.push(1);
    inputStack.push(2);
    inputStack.push(3);
    inputStack.push(4);
    inputStack.push(5);

    int N = inputStack.size();

    cout << "Stack before deleting middle: ";
    stack<int> temp = inputStack;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    deletemiddle(inputStack, N);

    cout << "Stack after deleting middle: ";
    while (!inputStack.empty())
    {
        cout << inputStack.top() << " ";
        inputStack.pop();
    }
    cout << endl;

    return 0;
}