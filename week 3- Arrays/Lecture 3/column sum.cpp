#include <iostream>
#include <cstdint>

using namespace std;

void printColumnSum(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[j][i];

            // 1	5	3
            // 7	6	9
            // 4	8	2
        };
        cout << "Printing sum of column " << i << " " << sum << endl;
    };
}

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 5, 3}, {7, 6, 9}, {4, 8, 2}};

    printColumnSum(arr, rows, cols);

    return 0;
}