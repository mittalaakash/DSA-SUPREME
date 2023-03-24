#include <iostream>

using namespace std;

int getLength(char name[])
{
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
}

void reverseString(char name[])
{                                // array passed by reference
    int s = 0;                   // first index
    int e = getLength(name) - 1; // last index

    while (s <= e)
    {                           // run till s<=e
        swap(name[s], name[e]); // swap s and e index
        s++;                    // increment start pointer
        e--;                    // decrement end pointer
    }

    // how it works
    // 12345 =>52341 => 54321
}

int main()
{
    char name[100];
    cin >> name;
    cout << "Before reverse, name = " << name << endl;
    reverseString(name); // Array is passed by reference
    cout << "After reverse, name = " << name;
    return 0;
}