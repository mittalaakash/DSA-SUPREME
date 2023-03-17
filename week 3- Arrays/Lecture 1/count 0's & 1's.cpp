#include <iostream>

using namespace std;

int zeroArr(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0) // If current element is 0, then increase count
            count++;
    }

    return count;
}

int oneArr(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1) // If current element is 1, then increase count
            count++;
    }

    return count;
}

int main()
{
    int arr[10] = {1, 0, 0, 1, 0, 0, 1, 0, 0, 1};
    int size = 10;
    int zeroCount = zeroArr(arr, size);
    int oneCount = oneArr(arr, size);
    cout << "Number of zeroes are " << zeroCount << endl;
    cout << "Number of ones are " << oneCount << endl;
    return 0;
}