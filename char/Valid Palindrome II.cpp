#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    while (i < j)
    {
        if (str[i] != str[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1);
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

int main()
{
    string input = "lreverl";
    bool ans = validPalindrome(input);
    cout << (ans ? "palindrome" : "not palindrome");
    return 0;
}