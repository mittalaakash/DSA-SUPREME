#include <iostream>
#include <vector>
#include <string>
using namespace std;
int expandAroundIndex(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countSubstrings(string s)
{
    int count = 0;
    int n = s.length();

    for (int center = 0; center < n; center++)
    {
        // odd
        int oddAns = expandAroundIndex(s, center, center);
        count = count + oddAns;
        // even
        int evenAns = expandAroundIndex(s, center, center + 1);
        count = count + evenAns;
    }
    return count;
}
int main()
{
    string s = "aaa";
    int ans = countSubstrings(s);
    cout << "palindromic substrings count: " << ans;

    return 0;
}