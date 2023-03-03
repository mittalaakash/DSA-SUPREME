#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int newArr[4] = {1, 2, 3, 4};

    vector<int>
        arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };

    int ans = findUnique(arr);
    cout << ans;
    return 0;
}
