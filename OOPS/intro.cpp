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

    Hero()
    {
        cout << "Constructor Called" << endl;
    }

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

    // Object created statically

    Hero jayy;

        /*

    // creation of object from hero class
    Hero jay;

    cout << "size of jay: " << sizeof(jay) << endl;

    cout << "Jay Health is " << jay.gethealth() << endl;
    // jay.health = 19;

    // use setter
    jay.sethealth(19);
    jay.level = 'D';

    cout << "Health is: " << jay.gethealth() << endl;
    cout << "Level is: " << jay.level << endl;

    */

    /*
    // static allocation
    Hero a;

    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.gethealth() << endl;

    // dynamically

    Hero *b = new Hero;
    b->setlevel('D');
    b->sethealth(70);

    cout << "Level is: " << (*b).level << endl;
    cout << "Health is: " << (*b).gethealth() << endl;

    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->gethealth() << endl;

    */

    return 0;
}