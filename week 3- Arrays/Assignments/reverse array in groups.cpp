#include <bits/stdc++.h>

using namespace std;

void reverse(vector<long long> &arr, int s, int e)
{
    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}

void reverseInGroup(vector<long long> &arr, int n, int k)
{
    int x = 0;
    while (x < n)
    {
        reverse(arr, x, min(x + k - 1, n - 1));
        x += k;
    }
}

int main()
{
    vector<long long> s = {1, 2, 3, 4, 5, 6, 7, 8};
    reverseInGroup(s, s.size(), 3);

    for (auto &a : s)
        cout << a << " ";
    return 0;
}