#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // find duplicate number
    vector<int> arr{4, 3, 2, 1, 5, 6, 1};
    // modifying array
    // int ans = -1;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int index = abs(arr[i]);

    //     if (arr[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }
    //     else
    //         arr[index] *= -1;
    // }
    // cout << ans;

    // positioning method

    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    cout << arr[0];

    return 0;
}