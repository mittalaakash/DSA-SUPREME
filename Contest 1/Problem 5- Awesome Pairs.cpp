// Geek is busy solving problems on Bitwise operators. Today while solving problems,
// he observed something which intrigued him very much. He discovered that there are
// some awesome pairs in a list of integers whose Bitwise AND is strictly greater than
// Bitwise X0R among them.
// Given a list arrl] of N integers find the number of awesome pairs.

// Example 1:
// Input:
// N 4
// arr[] {6, 2, 5, 3}

// output: 2
// Explanation:
// Awesome pairs are (6, 5) and (2, 3).

// Example 2:
// Input:
// N 3
// arr[]= {1, 1, 1}

// Output:3
// Explanation: All pairs are awesome.

#include <bits/stdc++.h>

using namespace std;

long long pairs(int N, int arr[])
{
    // Initialize an array of size 31 to store count of numbers having a particular bit set
    long long int c[31] = {0}, ans = 0;

    // Iterate through the input array and count the number of times each bit is set
    for (int i = 0; i < N; i++)
    {
        // Skip 0s as it will not contribute to any awesome pairs
        if (arr[i] == 0)
            continue;

        int j = 0;
        // Count the number of bits required to represent the current number
        while (arr[i] / (1 << j) != 0)
            j++;
        // Increment the count of the bit at index (j-1) in the c array
        c[j - 1]++;
    }

    // Iterate through the c array and count the number of awesome pairs using the formula (nC2) = (n*(n-1))/2
    for (int i = 0; i < 31; i++)
        ans += (c[i] * (c[i] - 1)) / 2;

    // Return the final count of awesome pairs
    return ans;
}

// brute force
long long pairsNaive(int N, int arr[])
{
    long long cnt = 0; // count of awesome pairs
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if ((arr[i] & arr[j]) > (arr[i] ^ arr[j]))
            {
                cnt++; // found an awesome pair
            }
        }
    }
    return cnt;
}

int main()
{

    int arr[4] = {6, 2, 5, 3};
    long long ans = pairs(4, arr);
    cout << "Awesome pairs: " << ans;

    return 0;
}