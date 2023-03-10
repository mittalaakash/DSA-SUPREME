#include <iostream>
#include <vector>

using namespace std;

int factorial(int n)
{
    if (n == 1)
        return 1;

    int ans = n * factorial(n - 1);

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = factorial(n);
    cout << ans;

    return 0;
}