#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
    int l = 0;
    int h = arr.size() - 1;

    while (l < h)
    {
        if (arr[l] < 0) // -ve is already on left
            l++;
        else if (arr[h] > 0) //+ve is already on right
            h--;
        else
        {
            swap(arr[l], arr[h]);
            l++;
            h--;
        }
    }
    for (auto value : arr)
        cout << value << '\t';
    return 0;
}