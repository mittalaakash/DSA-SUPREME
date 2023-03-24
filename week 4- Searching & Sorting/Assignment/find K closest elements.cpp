#include <bits/stdc++.h>

using namespace std;

// function to get the closest index of value x
int lowerBound(vector<int> &arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = end; // assigning end to get the last value if the value is greater than array elements

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }

    return ans;
}

vector<int> findClosestElementsBS(vector<int> &arr, int k, int x)
{
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0) // if the lowerBound is 0( h=0) then l = -1 that index can't be accessed so increasing h only
            h++;
        else if (h >= arr.size()) // if the lowerBound is arr.size()( h=end) then h can't be increased that index can't be accessed so decreasing l only
            l--;
        else if (x - arr[l] > arr[h] - x)
            h++;
        else
            l--;
    }

    // here l & h will be pointing towards next elements on both side,
    // suppose [2,3,5] is answer so [l->1,2,3,5,6<-h]
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    int l = 0, h = arr.size() - 1;
    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
            l++;
        else
            h--;
    }

    // here l & h will be pointing on start and end elements of answer ,
    // suppose [2,3,5] is answer so [1,l->2,3,5<-h,6]
    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int k = 4, x = 14;

    // approach 1 taking big window then narrowing it down till then difference is k
    vector<int> ans = findClosestElements(arr, k, x);

    // approach 2 taking small window then expanding it k times
    vector<int> ans = findClosestElementsBS(arr, k, x);

    for (auto &x : ans)
        cout << x << " ";

    return 0;
}