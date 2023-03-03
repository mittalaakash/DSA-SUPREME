#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (-start + end) / 2;
    // avoid integer overflow => mid= start + (end-start)/2
    while (start <= end)
    {

        if (arr[mid] == target)
            return mid;
        else if (mid - 1 >= 0 && arr[mid - 1] == target)
        {
            return mid - 1;
        }
        else if (mid + 1 <= arr.size() && arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (target > arr[mid])
        { // right serach
            start = mid + 2;
        }
        else
        { // left search
            end = mid - 2;
        }
        mid = start + (-start + end) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{10, 3, 40, 30, 50, 80, 70};
    int target = 40;
    cin >> target;

    int indexOfTarget = binarySearch(arr, target);
    cout << indexOfTarget;

    return 0;
}