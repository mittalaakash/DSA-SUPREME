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
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }

    // printing hash
    //  for (auto [key, value] : hash)
    //      cout << key << " : " << value << endl;
    return -1;
}

int findRepeatingElement(vector<int> &arr)
{
    vector<int> countArray(1000000, 0);
    // Store the count of each element
    for (int i = 0; i < arr.size(); i++)
    {
        countArray[arr[i]]++;
    }
    // Traverse the input array and know whether count is greater than or equal to 2
    for (int i = 0; i < arr.size(); i++)
    {
        if (countArray[arr[i]] >= 2)
        {
            int ans = arr[i];
            return ans;
        }
    }
    return -1; // If no repeating element exists
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