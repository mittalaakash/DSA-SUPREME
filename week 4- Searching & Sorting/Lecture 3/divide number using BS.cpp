#include <iostream>

using namespace std;

int divide(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (-start + end) / 2;
    // avoid integer overflow => mid= start + (end-start)/2
    int ans = -1;
    while (start <= end)
    {

        if (abs(mid * divisor) == abs(dividend))
            return mid;
        else if (abs(mid * divisor) > abs(dividend))
        { // search in left
            end = mid - 1;
        }
        else
        { // search in right
            ans = mid;
            start = mid + 1;
        }
        mid = start + (-start + end) / 2;
    }
    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
    {
        return ans;
    }
    else
        return -ans;
}

int main()
{
    int dividend = -22;
    int divisor = -7;

    int ans = divide(dividend, divisor);
    cout << ans;

    return 0;
}