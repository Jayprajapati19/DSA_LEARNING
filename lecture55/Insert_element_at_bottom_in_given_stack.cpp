#include <iostream>
#include <stack>
using namespace std;

// Function to push an element to the bottom of a stack
void pushToBottom(stack<int> &myStack, int x)
{
    // base case
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }
    int num = myStack.top();
    myStack.pop();

    // recursive call
    pushToBottom(myStack, x);

    myStack.push(num);
}

// Function to insert an element at the bottom of the stack
stack<int> insertAtBottom(stack<int> &myStack, int x)
{
    pushToBottom(myStack, x);
    return myStack;
}

// Function to print the contents of the stack
void printStack(stack<int> myStack)
{
    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    int x = 9;
    myStack = insertAtBottom(myStack, x);

    // Print stack to verify
    printStack(myStack);

    return 0;
}
