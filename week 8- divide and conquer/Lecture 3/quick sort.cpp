#include <iostream>
#include <vector>

using namespace std;

int partition(int arr[], int s, int e)
{ // step 1 choosed pivot
    int pivotIndex = s;
    int pivotElement = arr[s];

    // step2: find right position for pivot element and place it there
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotElement)
        {
            count++;
        }
    }
    // coming out of loop gives us right index for pivot

    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);

    // step3 smaller elements in left side and larger on right
    int i = s;
    int j = e;

    while (i < rightIndex && j > rightIndex)
    {
        while (arr[i] <= pivotElement)
        {
            i++;
        }
        while (arr[j] > pivotElement)
        {
            j--;
        }

        // 2 possibilities
        // i. you found the elemnt to swap
        // ii. no need to swap

        if (i < rightIndex && j > rightIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return rightIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition logic
    int p = partition(arr, s, e);

    // recursion
    // left of pivot
    quickSort(arr, s, p - 1);

    // right of pivot
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {1, 2, 4, 4, 5, 6, 7};
    int n = 7;

    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);

    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}