#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findDuplicate(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}

int findDuplicate2(vector<int> &nums)
{
    int ans = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);

        // if already visited
        if (nums[index] < 0)
        {
            ans = index;
            break;
        }

        // visited mark
        nums[index] *= -1;
    }

    return ans;
}

int findDuplicate3(vector<int> &nums)
{
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    return nums[0];
}

int main()
{
    vector<int> arr{5, 1, 4, 3, 2, 3};

    int ans = findDuplicate3(arr);
    cout << ans << endl;

    return 0;
}