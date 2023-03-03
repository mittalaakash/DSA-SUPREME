#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{2, 0, 1};
    // sort(arr.begin(), arr.end()); // sort function from STL

    int l = 0, m = 0;
    int h = arr.size() - 1;

    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            l++, m++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }

    for (auto value : arr)
    {
        cout << value;
    }
    return 0;
}