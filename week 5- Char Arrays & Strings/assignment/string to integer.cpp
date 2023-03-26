#include <bits/stdc++.h>

using namespace std;

int myAtoi(string s)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Remove leading white spaces
    while (s[i] == ' ')
    {
        i++;
    }

    // Check for sign
    if (s[i] == '-' || s[i] == '+')
    {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // Parse digits
    while (i < s.length() && isdigit(s[i]))
    {
        int digit = s[i] - '0';

        // Check for overflow
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7))
        {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}

int main()
{

    cout << myAtoi("   -0123");

    return 0;
}