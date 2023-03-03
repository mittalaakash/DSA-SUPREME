#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findPivotElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid + 1 < size && arr[mid] > arr[mid + 1])
            return mid;
        else if (mid - 1 >= 0 && arr[mid - 1] > arr[mid])
            return mid - 1;
        else if (arr[start] >= arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    // vector<int> v{1, 2, 3, 4, 5, 6};
    int arr[] = {3, 9, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = findPivotElement(arr, size);
    cout << value;

    return 0;
}