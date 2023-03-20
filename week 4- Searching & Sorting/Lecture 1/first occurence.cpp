#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// lower_bound can find the first occurence from algorithm header file
// int ans = lower_bound(v.begin(), v.end(), target);

int firstOccurence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;

    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            // ans store
            ans = mid;
            // left search
            e = mid - 1;
        }
        else if (target < v[mid])
        {
            // left search
            e = mid - 1;
        }
        else
        {
            // right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 4, 4, 4, 4, 5, 6};
    int target = 4;
    int indexOfFirstOccurence = firstOccurence(v, target);
    cout << "ans is: " << indexOfFirstOccurence;
    // if ()
    // {
    //     cout << "found";
    // }
    // else
    //     cout << "not found";
    return 0;
}