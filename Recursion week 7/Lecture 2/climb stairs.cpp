#include <iostream>
#include <vector>

using namespace std;
int climbStairs(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;

    return climbStairs(n - 1) + climbStairs(n - 2);
}

int main()
{
    int n;
    cin >> n;

    int ans = climbStairs(n);
    cout << ans;

    return 0;
}