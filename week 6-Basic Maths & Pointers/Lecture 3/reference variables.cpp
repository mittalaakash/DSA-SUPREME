#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int &b = a; // Reference variable creation

    cout << a << endl; // 5
    cout << b << endl; // 5

    b++;

    cout << a << endl; // 6
    cout << b << endl; // 6

    return 0;
}