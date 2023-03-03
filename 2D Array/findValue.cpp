#include <iostream>
#include <cstdint>

using namespace std;

bool findValue(int arr[][3], int rows, int cols, int n)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == n)
                return true;
        };
    };
    return false;
};

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 5, 3}, {7, 6, 9}, {4, 8, 2}};
    int n;
    cin >> n;
    int ans = findValue(arr, rows, cols, n);
    cout << (ans ? "true" : "false");

    return 0;
}