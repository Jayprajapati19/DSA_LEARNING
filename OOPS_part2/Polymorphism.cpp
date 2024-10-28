#include <iostream>

using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello Jay Prajapati" << endl;
    }

    int sayHello(char name)
    {
        cout << "Hello Jay Prajapati" << endl;
        return 1;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
}