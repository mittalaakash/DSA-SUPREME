#include <iostream>
#include <string.h>

using namespace std;

void replaceSpaces(char name[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}

int main()
{

    char name[100];

    cin.getline(name, 100);
    int len = strlen(name); // gives the length of char array

    replaceSpaces(name, len);
    cout << name << endl;

    return 0;
}