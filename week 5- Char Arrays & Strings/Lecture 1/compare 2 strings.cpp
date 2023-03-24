#include <iostream>

using namespace std;

bool compareStrings(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }

    for (int i = 0; i < a.length(); i++) // < a.length, since a and b are equal in length
    {
        if (a[i] != b[i]) // if any character @ same index mismatches we're returning false
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str1 = "Learn";
    string str2 = "Learn";

    if (compareStrings(str1, str2))
        cout << "Equal";
    else
        cout << "Not Equal";
    return 0;
}