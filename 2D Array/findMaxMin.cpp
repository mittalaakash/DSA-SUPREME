#include <iostream>
#include <cstdint>

using namespace std;

int findMax(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
                maxi = arr[i][j];
        };
    };
    return maxi;
};
int findMin(int arr[][3], int rows, int cols)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < mini)
                mini = arr[i][j];
        };
    };
    return mini;
};

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 0, 3}, {7, 6, 9}, {4, 8, 2}};
    int n;
    cin >> n;
    int max = findMax(arr, rows, cols);
    int min = findMin(arr, rows, cols);
    cout << "Maximum Number: " << (max) << '\n';
    cout << "Minimum Number: " << (min) << '\n';

    return 0;
}