#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

bool checkPalindrome(char input[], int n)
{
    int start = 0;
    int last = n - 1;

    while (start <= last)
    {
        if (input[start] != input[last])
        {
            return false;
        }
        start++;
        last--;
    }
    return true;
}

int main()
{
    char input[100];
    cin.getline(input, sizeof(input));

    int n = strlen(input);
    int ans = checkPalindrome(input, n);

    cout << (ans ? "pallindrome" : "not a pallindrome");

    return 0;
}