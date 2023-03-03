#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{10, 1, 7, 6, 14, 9};
    int n = arr.size();

    for (int round = 1; round < n; round++)
    {
        // step 1 fetch
        int val = arr[round];
        // step 2 compare
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                // step 3 shift
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        // step 4 copy
        arr[j + 1] = val;
    }

    for (auto v : arr)
        cout << v << " ";

    return 0;
}