#include <iostream>
#include <cstdint>

using namespace std;

int traspose(int arr[][3], int rows, int cols, int transposeArr[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transposeArr[j][i] = arr[i][j];
        };
    };
    return transposeArr[3][3];
};

void printArray(int arr[][3], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
}

int main()
{
    int rows = 3, cols = 3;
    int arr[3][3] = {{1, 0, 3}, {7, 6, 9}, {4, 8, 2}};
    int transposeArr[3][3];

    printArray(arr, rows, cols);
    cout << "\n";
    traspose(arr, rows, cols, transposeArr);
    printArray(transposeArr, rows, cols);

    return 0;
}