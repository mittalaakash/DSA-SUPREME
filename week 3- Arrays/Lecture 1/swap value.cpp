#include <iostream>

using namespace std;

int main()
{
    int a = 2, b = 3;
    // method 1

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // method 2

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}