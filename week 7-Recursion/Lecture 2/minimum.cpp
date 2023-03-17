#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

void findMax(int arr[], int n, int i, int &mini)
{
    // base case
    if (i >= n)
        return;

    if (arr[i] < mini)
        mini = arr[i];

    findMax(arr, n, i + 1, mini);
}

int main()
{
    int arr[8] = {10, 21, 36, 20, 30, 17, 41, 38};
    int n = 8;
    int i = 0;

    int mini = INT_MAX;

    findMax(arr, n, i, mini);

    cout << "minimum number is : " << mini;

    return 0;
}