#include <iostream>
#include <vector>
using namespace std;

int missingElement(vector<int> v)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (v[mid] == mid + 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 6, 7};
    int value = missingElement(v);

    return 0;
}