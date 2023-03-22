#include <bits/stdc++.h>

using namespace std;
int findPairsHash(vector<int> &nums, int k)
{
    unordered_map<int, int> hash;
    int ans = 0;

    for (auto &n : nums)
        hash[n]++;

    if (k == 0)
    {
        for (auto &h : hash)
        {
            if (h.second > 1)
                ans++;
        }
    }
    else
    {
        for (auto &h : hash)
            if (hash.find(h.first + k) != hash.end())
                ans++;
    }
    return ans;
}

int findPairsSet(vector<int> &arr, int k)
{ // using 2 pointer approach and set
    sort(arr.begin(), arr.end());
    int i = 0, j = i + 1;

    set<pair<int, int>> ans;

    while (j < arr.size())
    {
        int diff = arr[j] - arr[i];
        if (diff == k)
        {
            ans.insert({arr[i], arr[j]});
            i++, j++;
        }
        else if (diff > k)
            i++;
        else
            j++;

        if (i == j)
            j++;
    }
    return ans.size();
}
int main()
{
    vector<int> nums = {1, 1, 1, 1};
    int k = 0;

    // int ans = findPairsHash(nums, k);
    int ans = findPairsSet(nums, k);

    cout << ans;
}