#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> brr{0, 3, 8, 3, 9, 10};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {
                brr[j] = INT_MIN;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != INT_MIN)
        {
            ans.push_back(brr[i]);
        }
    }

    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}