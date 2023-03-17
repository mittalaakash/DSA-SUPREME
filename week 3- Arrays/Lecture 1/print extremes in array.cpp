#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int start = 0;
    int end = 5;
    while (start <= end)
    {
        if (start == end) // array has 1 element only
        {
            cout << arr[start] << " "; // print once only
            break;
        }
        cout << arr[start] << " ";
        cout << arr[end] << " ";
        start++; // updating start pointer/variable
        end--;   // updating end pointer/variable
    }
    return 0;
}