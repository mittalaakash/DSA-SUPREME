#include <iostream>
#include <cstdint>

using namespace std;

void printRowSum(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];

            // 1	5	3
            // 7	6	9
            // 4	8	2
        };
        cout << "Printing sum of row " << i << " " << sum << endl;
    };
}

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 5, 3}, {7, 6, 9}, {4, 8, 2}};

    printRowSum(arr, rows, cols);

    return 0;
}