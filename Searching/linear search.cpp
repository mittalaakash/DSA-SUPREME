#include <iostream>
#include <vector>
using namespace std;

int linearSearch(int arr[], int size, int target) {}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target;
    cin >> target;

    int indexOfTarget = linearSearch(arr, size, target);
    cout << indexOfTarget;
    return 0;
}