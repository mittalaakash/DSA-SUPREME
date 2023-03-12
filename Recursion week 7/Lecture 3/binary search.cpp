#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &v, int &s, int &e, int &key)
{
    int ans = -1;
    // base case

    if (s > e)
        return -1;

    int mid = (s + e) / 2;

    if (v[mid] == key)
        return mid;
    else if (v[mid] < key)
    {
        s = mid + 1;
        ans = binarySearch(v, s, e, key);
    }
    else
    {
        e = mid - 1;
        ans = binarySearch(v, s, e, key);
    }
    return ans;
}

int main()
{
    vector<int> v{10, 20, 30, 50, 60, 70, 80};
    int n = v.size();
    int target = 50;
    int s = 0;
    int e = n - 1;

    int ans = binarySearch(v, s, e, target);

    cout << ans;

    return 0;
}