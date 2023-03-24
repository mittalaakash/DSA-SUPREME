#include <bits/stdc++.h>

using namespace std;

// last character of char array is null '\0'
int findLength(char name[])
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

int main()
{
    char name[100];
    cin >> name;
    int length = findLength(name);
    cout << "Length of string = " << length << endl;
    cout << strlen(name);
    return 0;
}