#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{5, 4, 3, 0, 2, 1};
    int n = arr.size();
    bool swapped = false;
    for (int round = 1; round < n - 1; round++)
    {
        for (int j = 0; j < n - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped)
        { // no swap was done, so breaking the loop
            break;
        }
    }

    for (auto v : arr)
        cout << v << " ";

    return 0;
}