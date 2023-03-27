// Given an array arr[] of length, N. One has to partition the array into multiple beautiful
// array.
// Definition of a Beautiful Array: If we sort the array, no two neighbor elements have a
// difference of more than K.
// The task is to find the minimum number of beautiful arrays one can create from the
// given array

// Note: To minimize the number of beautiful arrays, one can add X numbers of elements
// in the original array

// Example 1:
// Input: arr [] = {1,1, 3,1,1,6,1,1, 8, 10}
// X = 3, K = 1
// Output: 2

// Explanation: You can add atmost 3 elements in the original array
// to make the array beautiful trom the given array.
// So lets say you add 2, 7 and 9 in the original array.
// NOw we can make two beautiful array from it.
// arri[] = {1,1,1,1,1,1,2, 3)
// arr2[] = {6,7,8,9, 10}
// So the output will be 2.

#include <bits/stdc++.h>

using namespace std;

// This function takes a vector of integers a, an integer x, and an integer k as input
int beautifulArray(vector<int> &a, int x, int k)
{
    int n = a.size();

    // The input vector is sorted in non-descending order
    sort(a.begin(), a.end());

    // Find the differences between consecutive elements in the sorted vector a
    vector<int> differ;
    for (int i = 1; i < n; i++)
    {
        int tmp = a[i] - a[i - 1];
        if (tmp > k)
        {
            differ.push_back(tmp);
        }
    }

    // The differences vector is sorted in non-descending order
    sort(differ.begin(), differ.end());

    int cnt = 0;
    for (int i = 0; i < differ.size(); i++)
    {
        int val = differ[i];

        // Compute how many elements of difference k are needed to reduce val to less than or equal to k
        int diff = val / k;
        if (val % k == 0)
        {
            diff--;
        }

        // Take the minimum of diff and x, and subtract it from x
        int mini = min(x, diff);
        x -= mini;

        // If val is less than or equal to k after subtracting mini*k from it, increment cnt
        val -= mini * k;
        if (val <= k)
        {
            cnt++;
        }

        // If x is less than or equal to 0, break out of the loop
        if (x <= 0)
        {
            break;
        }
    }

    // Compute the final answer and return it
    int ans = differ.size() - cnt + 1;
    return ans;
}

int main()
{

    vector<int> arr{1, 1, 3, 1, 1, 6, 1, 1, 8, 10};
    int x = 3, k = 1;

    int ans = beautifulArray(arr, x, k);

    cout << "Minimum number of beautiful arrays: " << ans;

    return 0;
}