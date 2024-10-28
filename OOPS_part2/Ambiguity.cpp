#include <iostream>

using namespace std;

class A
{
public:
    void func()
    {
        cout << "I am A.." << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B..." << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C ojb1;
    // ojb1.func();
    ojb1.A::func();
    ojb1.B::func();

    // (::) -> Scope Resolution Operator

    return 0;
}