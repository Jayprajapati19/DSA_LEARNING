#include <iostream>

using namespace std;

class Human
{
public:
    int height;
    int weight;

private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

// inherit
class Male : private Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping " << endl;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    Male m1;
    // cout << m1.height << endl;
    cout << m1.getHeight() << endl;

    /*
    Male object1;
    cout << object1.age << endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl;

    object1.setWeight(19);
    cout << object1.weight << endl;

    object1.sleep();
    */

    return 0;
}