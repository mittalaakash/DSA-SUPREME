#include <bits/stdc++.h>

using namespace std;
void reverseInGroups(vector<long long> &arr, int n, int k)
{
    // code here
    int i = 0;
    int s = (n % k == 0) ? n : n / k;
    int g = k;
    for (; i <= s; i += k)
    {
        for (int j = i; j < g; j++)
        {
            swap(arr[j], arr[g - 1]);
            g--;
        }
        g += k;
    }
    if (n % k != 0)
    {
        int t = n;
        // i += 1;
        for (; i < t; i++)
        {
            swap(arr[i], arr[t - 1]);
            t--;
        }
    }
}
int main()
{
    vector<long long> arr = {1, 2, 3, 4, 5};
    reverseInGroups(arr, 5, 3);
    for (auto i : arr)
    {
        cout << i << " ";
    }
}