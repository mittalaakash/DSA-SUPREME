// minimum number of elements to create target sum

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int solve(vector<int> &arr, int length)
{
    // base case
    if (length == 0)
        return 0;

    int mini = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (length - arr[i] < 0)
            continue;
        int ans = solve(arr, length - arr[i]);
        if (ans == INT_MIN)
            continue;
        mini = max(mini, ans + 1);
    }

    return mini;
}

int main()
{
    vector<int> arr{4, 3, 2};
    int length = 7;
    int ans = solve(arr, length);
    cout << ans << endl;
    return 0;
}