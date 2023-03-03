#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // dutch national flag
    vector<int> arr{-3, 4, -5, 1, 2, 6};
    int l = 0;
    int h = arr.size() - 1;

    while (l < h)
    {
        if (arr[l] < 0)
            l++;
        else if (arr[h] > 0)
            h--;
        else
            swap(arr[l], arr[h]);
    }
    for (auto value : arr)
        cout << value << '\t';
    return 0;
}