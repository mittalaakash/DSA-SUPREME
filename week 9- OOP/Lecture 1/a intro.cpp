#include <bits/stdc++.h>

using namespace std;

class Animal
{
private:
    int weight;

public:
    // char type;
    int age;
    string type;

    // constructor
    Animal() // whenever we create an instance contructor is called
    {
        this->weight = 0;
        this->age = 0;
        this->type = "";
        cout << "Contructor called" << endl;
    }

    // Parameterized constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Contructor 1 called" << endl;
    }

    Animal(int age, int weight)
    {
        this->weight = weight;
        this->age = age;
        cout << "Contructor 2 called" << endl;
    }
    Animal(int age, int weight, string type)
    {
        this->weight = weight;
        this->age = age;
        this->type = type;
        cout << "Contructor  3 called" << endl;
    }

    // Copy Contructor
    Animal(Animal &obj)
    {
        this->weight = obj.weight;
        this->age = obj.age;
        this->type = obj.type;
        cout << "Contructor  3 called" << endl;
    }

    // behaviour
    void eat()
    {
        cout << "Eating " << endl;
    }

    // getter to get weight
    int getWeight()
    {
        return weight;
    }
    // setter to set weight
    void setWeight(int w)
    {
        this->weight = w;
    }

    void sleep()
    {
        cout << "Sleeping " << endl;
    }

    // destructor
    ~Animal()
    {
        cout << "I am inside destructor" << endl;
    }
};

int main()
{
    // cout << "size of Empty class: " << sizeof(Animal) << endl;
    // Object creation

    // Static
    Animal sam;

    sam.age = 7;
    sam.type = "dog";

    cout << "age is: " << sam.age << endl;
    cout << "type is: " << sam.type << endl;

    sam.eat();
    sam.sleep();

    sam.setWeight(5);
    cout << sam.getWeight() << endl;

    // Dynamic memory

    Animal *dam = new Animal;

    (*dam).age = 15; // dam is storing address, so we're dereferencing it
    (*dam).type = "cat";

    // alternate way
    dam->age = 17; // dam is storing address, so we're dereferencing it
    dam->type = "catt";

    // deleting dynamically created dam
    delete dam;

    // Object copy
    // Animal c = a;

    return 0;
}