#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1};

    int start = 0, end = arr.size() - 1;
    int i = 0;
    while (start <= end)
    {
        if (arr[i] == 0)
        {
            // swap from left
            swap(arr[start], arr[i]);
            i++;
            start++;
        }
        else
        {
            // swap from right
            swap(arr[i], arr[end]);
            end--;
        }
        // print
    }
    for (auto value : arr)
    {
        cout << value << " ";
    }
    return 0;
}