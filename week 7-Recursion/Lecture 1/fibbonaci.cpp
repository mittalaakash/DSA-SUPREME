#include <iostream>
#include <vector>

using namespace std;

int fib(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;

    int ans = fib(n);
    cout << ans;
    return 0;
}