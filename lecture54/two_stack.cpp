#include <iostream>
using namespace std;

class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        else
        {
            cout << "Stack 1 Overflow" << endl;
        }
    }

    // Push in stack 2.
    void push2(int num)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        else
        {
            cout << "Stack 2 Overflow" << endl;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            cout << "Stack 1 Underflow" << endl;
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            cout << "Stack 2 Underflow" << endl;
            return -1;
        }
    }

    ~TwoStack()
    {
        delete[] arr;
    }
};

int main()
{
    int size = 10; // Define the size of the array
    TwoStack ts(size);

    // Testing stack 1
    ts.push1(5);
    ts.push1(10);
    cout << "Popped from stack 1: " << ts.pop1() << endl;
    cout << "Popped from stack 1: " << ts.pop1() << endl;

    // Testing stack 2
    ts.push2(20);
    ts.push2(30);
    cout << "Popped from stack 2: " << ts.pop2() << endl;
    cout << "Popped from stack 2: " << ts.pop2() << endl;

    return 0;
}
