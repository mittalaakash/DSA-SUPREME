#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void checkKey(string &str, int &i, int &n, char &key)
{
    if (i >= n)
        return;

    if (str[i] == key)
        cout << "found at: " << i << endl;

    return checkKey(str, ++i, n, key);
}

int main()
{
    string str = "lovebabbar";
    int n = str.length();
    int i = 0;

    char key = 'l';
    int ans = 1;
    checkKey(str, i, n, key);

    return 0;
}