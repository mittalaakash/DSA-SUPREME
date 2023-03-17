#include <iostream>
#include <vector>

using namespace std;

bool checkSorted(vector<int> &v, int &n, int i)
{
    // base case
    if (i == n - 1)
        return true;

    if (v[i + 1] < v[i])
        return false;

    return checkSorted(v, n, i + 1);
}

int main()
{
    vector<int> v{20, 30, 50, 60, 10};
    int n = v.size();
    int i = 0;

    bool isSorted = checkSorted(v, n, i);
    if (isSorted)
        cout << "Array is sorted";
    else
        cout << "Array is sorted";
    return 0;
}