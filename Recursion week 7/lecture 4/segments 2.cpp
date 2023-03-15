// minimum number of elements to create target sum

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int solve(int length, int x, int y, int z)
{
    // base case
    if (length == 0)
        return 0;

    if (length < 0)
        return INT_MIN;

    int a = solve(length - x, x, y, z) + 1;
    int b = solve(length - y, x, y, z) + 1;
    int c = solve(length - z, x, y, z) + 1;

    return max(a, max(b, c));
}

int main()
{
    int x = 5;
    int y = 2;
    int z = 2;
    int length = 7;

    int ans = solve(length, x, y, z);
    if (ans < 0)
        ans = 0;
    cout << "Answer is :" << ans << endl;
    return 0;
}