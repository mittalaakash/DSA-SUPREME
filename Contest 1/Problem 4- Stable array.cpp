// Given an array all of length N. You have to make the array stable
// Definition of the Stable Array: A array is called stable when, there exists a number X,
// such that every number from the array occurs only X times or zero times.
// The task is to find the minimum number that needs to be removed to make the array
// stable.

// Example 1:
// Input a[] = {4,3,1,3,1,2}
// Output 2
// Explanation: If we remove 1st and last element from
// the given array, then the array will be stable
// resultant array: 3 1 3 1 (every element occurs only 2 times)

// Example 2:
// Input a[] = {1,1,2,4,1,2,2}
// Output: 1
// Explanation: If we remove 4th element i.e. 4,
// then the array will be stable
// resultant array: 11 21 2 2 (every element occur only 3 times)

// Your Task:
// You don't need to read input or print anything. Your task is to complete the
// function stableArray() which takes the array of integers arr, n as parameters and
// returns an integer, the minimum number of elements needs to be removed to make
// the given array stable

#include <bits/stdc++.h>

using namespace std;

int stableArray(vector<int> &a)
{
    int n = a.size();

    // Create a map to count the occurrences of each element in the array
    map<int, int> mp;

    // Iterate through the array and increment the count in the map
    for (auto &x : a)
    {
        mp[x]++;
    }

    // Create a vector to store the count of occurrences for each element
    vector<int> v;
    for (auto i : mp)
    {
        v.push_back(i.second);
    }

    // Sort the vector to get the elements with least and maximum occurrences
    sort(v.begin(), v.end());

    int ans = INT_MAX;

    // Iterate through the count of occurrences for each element
    for (int i : v)
    {
        // Find the index of the element with least count in the sorted vector
        int temp = lower_bound(v.begin(), v.end(), i) - v.begin();
        // Calculate the number of elements that need to be removed to make the array stable
        int flag = v.size() - temp;
        ans = min(ans, n - flag * i);
    }

    return ans;
}

int main()
{
    vector<int> arr{1, 1, 2, 4, 1, 2, 2};

    int ans = stableArray(arr);

    cout << "Minimum elements to be removed from arrray to make it stable: " << ans;

    return 0;
}

// This function takes an array 'a' as input and returns the minimum number of elements
// needed to be removed to make the given array stable.
// The function first creates a map 'mp' to count the frequency of each element in the input array.
// It then creates a vector 'v' to store the frequencies of all the elements in the input array.
// The vector 'v' is then sorted in ascending order.
// For each frequency 'i' in the sorted vector 'v', the function calculates the number of elements
// in the input array that are not present in the stable array.
// This is done by finding the position of 'i' in the sorted vector 'v' and subtracting it from
// the size of the vector 'v'.
// The function then calculates the number of elements that need to be removed from the input array
// to make it stable, which is the difference between the size of the input array and the product of
// the frequency 'i' and the number of elements not present in the stable array.
// Finally, the function returns the minimum value of the calculated number of elements to be removed.