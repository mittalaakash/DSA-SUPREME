#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void findMax(int arr[], int n, int i, int &maxi)
{
    // base case
    if (i >= n)
        return;

    if (arr[i] > maxi)
        maxi = arr[i];

    findMax(arr, n, i + 1, maxi);
}

int main()
{
    int arr[8] = {10, 21, 36, 20, 30, 17, 41, 38};
    int n = 8;
    int i = 0;

    int maxi = INT_MIN;

    findMax(arr, n, i, maxi);

    cout << "maximum number is : " << maxi;

    return 0;
}