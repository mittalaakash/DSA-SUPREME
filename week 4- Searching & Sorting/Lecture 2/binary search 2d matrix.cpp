#include <iostream>
using namespace std;

bool binarySearch(int arr[][4], int rows, int cols, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;

    // avoid integer overflow => mid= start + (end-start)/2
    while (start <= end)
    {
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        int element = arr[rowIndex][colIndex];

        if (element == target)
        {
            cout << "found at row: " << rowIndex << ", col: " << colIndex << endl;
            return true;
        }
        else if (target < element)
        { // search in left
            end = mid - 1;
        }
        else
        { // search in right
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }

    return false;
}

int main()
{
    int arr[5][4] = {{1, 2, 3, 4}, {6, 8, 9, 11}, {12, 15, 19, 20}};
    int rows = 3;
    int cols = 4;
    int target;
    cin >> target;

    bool ans = binarySearch(arr, rows, cols, target);
    cout << (ans ? "found" : "notfound");

    return 0;
}