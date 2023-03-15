// minimum number of elements to create target sum

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int solve(vector<int> &arr, int target)
{
    // base case
    if (target == 0)
        return 0;
    else if (target < 0)
        return INT_MAX; // don't want to update mini, so passing int max

    int mini = INT_MAX;

    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans == INT_MAX)
            continue;
        mini = min(mini, ans + 1);
    }

    return mini;
}

int main()
{
    vector<int> arr{1, 2};
    int target = 5;
    int ans = solve(arr, target);
    cout << ans << endl;
    return 0;
}