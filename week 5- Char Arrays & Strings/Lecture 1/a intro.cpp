#include <iostream>
#include <string>

using namespace std;

int main()
{
    // creating char array
    char ch[100];
    cin >> ch; // input value as entire sequence

    // another way to get entire sequence
    // cin.getline(ch, 100);
    cout << ch;   // showing value
    cin >> ch[0]; // specific character as i/p

    string S;
    getline(cin, S);

    cout << S;

    return 0;
}