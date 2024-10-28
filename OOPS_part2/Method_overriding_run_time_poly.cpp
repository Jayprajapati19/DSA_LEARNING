#include <iostream>

using namespace std;

class Animal
{
public:
    void Speak()
    {
        cout << "Speaking...." << endl;
    }
};

class Dog : public Animal
{
public:
    // void Speak()
    // {
    //     cout << "  Barkig..." << endl;
    // }
};

int main()
{
    Dog obj;
    obj.Speak();
}