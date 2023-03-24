#include <bits/stdc++.h>

using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int l = 0, h = arr.size() - 1;
    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
            l++;
        else
            h--;
    }

    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int k = 4, x = 3;
    vector<int> ans = findClosestElements(arr, k, x);

    for (auto &x : ans)
        cout << x << " ";

    return 0;
}