#include <iostream>
using namespace std;
int setBit(int N, int K)
{
    int num = 1 << K;

    int ans = N | num;
    return ans;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = setBit(n, k);
    cout << ans;

    return 0;
}