#include <bits/stdc++.h>

using namespace std;

// +-----------------+---------------------------------+
// | Base Class      | Types of Inheritance            |
// | Access Modifier +-----------+-----------+---------+
// |                 | Public    | Protected | Private |
// +-----------------+-----------+-----------+---------+
// | Public          | Public    | Public    | Public  |
// +-----------------+-----------+-----------+---------+
// | Protected       | Protected | Protected | Private |
// +-----------------+-----------+-----------+---------+
// | Private         | NA        | NA        | NA      |
// +-----------------+-----------+-----------+---------+

class Animal
{
public:
    int age;
    int weight;

    void eat()
    {
        cout << "Eating" << endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog sam;

    sam.eat();

    return 0;
}