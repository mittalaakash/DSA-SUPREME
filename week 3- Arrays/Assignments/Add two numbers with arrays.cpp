#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string calc_Sum(int *a, int n, int *b, int m)
{
    string str;
    int i = n - 1;
    int j = m - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int ans = a[i] + b[j] + carry;
        carry = ans / 10;
        int digit = ans % 10;
        str.push_back(digit + '0');
        i--;
        j--;
    }

    while (i >= 0)
    {
        int ans = a[i] + carry;
        carry = ans / 10;
        int digit = ans % 10;
        str.push_back(digit + '0');
        i--;
    }
    while (j >= 0)
    {
        int ans = b[j] + carry;
        carry = ans / 10;
        int digit = ans % 10;
        str.push_back(digit + '0');
        j--;
    }

    if (carry)
        str.push_back(carry + '0');

    while (str[str.length() - 1] == '0')
        str.pop_back();
    reverse(str.begin(), str.end());

    return str;
}

int main()
{
    int a[] = {1, 2, 3};
    int b[] = {3, 2, 1};

    int aSize = sizeof(a) / sizeof(a[0]);
    int bSize = sizeof(b) / sizeof(b[0]);

    string str = calc_Sum(a, aSize, b, bSize);
    cout << "sum : " << str;

    return 0;
}