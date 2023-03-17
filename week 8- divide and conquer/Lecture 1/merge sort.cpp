#include <iostream>
#include <vector>

using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1];
    int *right = new int[len2];

    // copy values

    // copy first part of array to left array
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    // copy second part of array to right array
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge 2 sorted arrays logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // copy remaining values of left array to main array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // copy remaining values of right array to main array
    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // TODO delete the arrays
    delete[] left;
    delete[] right;
}

void mergeSort(int *arr, int s, int e)
{
    // base case
    // s==e -> single element
    // s>e -> invalid array
    if (s >= e)
        return;

    int mid = (s + e) / 2;

    // sort left part with recursion
    mergeSort(arr, s, mid);

    // sort  right part with recursion
    mergeSort(arr, mid + 1, e);

    // now merge both arrays
    merge(arr, s, e);
}

int main()
{
    int arr[] = {3, 5, 13, 2, 12, 5};
    int n = 6;

    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}