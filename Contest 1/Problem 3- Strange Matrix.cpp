// A[][] is a (R x C) boolean matrix such that each of its element is either 0 or 1. Each
// row of the matrix is sorted. Find the index of the row which has the maximum number
// of ones. If there are multiple such rows then return the smallest index.
// An array B[] of size R is used to construct matrix A such that B[i] denotes the number
// of zeroes in the ith rOW

// Example 1:
// Input:
// R-3, C=3
// B[1-(1, , 2}
// Output: 1

// Explanation:
// A[][] =[[0,1,1],
// [1,1,1],
// [0,0,1]]
// Row with index 1 has maximum number ot 1s.

// Your Task:
// You don't need to read input or print anything. Your task is to complete the function
// solve() which takes R and C as input parameters and returns the index of the row
// which has maximum number of 1s. If there are multiple such rows then return the
// smallest index. The returned index must be according to 0 based indexing.
// The matrix A or the array B are not directly accessible. You are provided a helper
// function get (i,j) which will fetch the value of A[i][j].

#include <bits/stdc++.h>

using namespace std;

int solve(int a[][3], int R, int C)
{
    int answer = 0; // initialize the answer to 0
    int last = C;   // initialize the last index to C

    // loop through each row of the matrix
    for (int i = 0; i < R; i++)
    {
        // move the last index left as long as the last element in the current row is 1
        while (last > 0 && a[i][last - 1] == 1)
        {
            answer = i; // update the answer to the current row index
            last--;     // decrement the last index
        }
    }

    return answer; // return the index of the row with the maximum number of ones
}

int main()
{

    int A[3][3] = {
        {1, 1, 1},
        {0, 1, 1},
        {0, 0, 1}};

    int ans = solve(A, 3, 3);
    cout << ans;

    return 0;
}