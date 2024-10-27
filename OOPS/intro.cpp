#include <iostream>
using namespace std;

class Hero
{
    // properties

    // int name[100];
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int gethealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void sethealth(int h)
    {
        health = h;
    }

    void setlevel(int ch)
    {
        level = ch;
    }
};

int main()
{
    // creation of object from hero class
    Hero jay;
    jay.health = 19;
    jay.level = 'D';

    // cout << "size: " << sizeof(h1) << endl;

    cout << "Health is: " << jay.health << endl;
    cout << "Level is: " << jay.level << endl;

    return 0;
}