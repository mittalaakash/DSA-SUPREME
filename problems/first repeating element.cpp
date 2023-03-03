#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findElement(int arr[], int size)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < size; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    int arr[] = {1, 5, 2, 3, 4, 6, 5, 3, 7};
    size = sizeof(arr) / sizeof(arr[0]);

    int ans = findElement(arr, size);
    cout << ans;
    return 0;
}