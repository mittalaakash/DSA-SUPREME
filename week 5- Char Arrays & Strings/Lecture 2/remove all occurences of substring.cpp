#include <iostream>
#include <vector>
#include <string>

using namespace std;

string removeOccurrences(string s, string part)
{
    int pos = s.find(part);
    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main()
{
    string s = "daabcbaabcbc";

    string part = "abc";

    string ans = removeOccurrences(s, part);
    cout << ans;

    return 0;
}