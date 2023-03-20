#include <iostream>
#include <vector>
using namespace std;

int findPivotElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
            return mid;
        else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
            return mid - 1;
        else if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(vector<int> arr, int target, int start, int end)
{
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivotElement(nums);
    int ans = -1;
    if (nums[0] <= target && target <= nums[pivotIndex])
    {
        ans = binarySearch(nums, target, 0, pivotIndex);
    }
    else if (pivotIndex + 1 < nums.size() && nums[pivotIndex + 1] <= target && target <= nums[nums.size() - 1])
    {
        ans = binarySearch(nums, target, pivotIndex + 1, nums.size() - 1);
    }
    return ans;
}

int main()
{
    vector<int> arr{3, 4, 5, 6, 1, 2};
    int ans = search(arr, 1);
    cout << ans;
}