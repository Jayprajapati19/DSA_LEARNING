#include <iostream>
using namespace std;

class Hero
{
    // properties

    // int name[100];
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "Defult Constructor Called" << endl;
        name = new char[100];
    }

    // ParameterRised Constructor
    Hero(int health)
    {
        cout << "this ->" << this << endl;
        this->health = health;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << endl;
        cout << "Name: " << this->name << " ,";

        cout << "health: " << this->health << " ,";
        cout << "level: " << this->level << " ,";
        cout << endl;
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
    };

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{

    Hero hero1;
    hero1.sethealth(12);
    hero1.setlevel('D');
    char name[7] = "JayPra";
    hero1.setName(name);

    hero1.print();

    // Hero Jadi(70, 'C');

    // Hero diyu(jadi);

    // // Object created statically
    // Hero jay(10);

    // cout << "Address of Jay" << &jay << endl;

    // jay.gethealth();

    // // Dynamically
    // Hero *h = new Hero();

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