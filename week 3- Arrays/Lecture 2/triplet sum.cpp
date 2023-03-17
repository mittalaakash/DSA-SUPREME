#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    int sum = 9;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << endl
                         << "found the pair: " << arr[i] << "," << arr[j] << "," << arr[k];
                }
            }
        }
    }

    return 0;
}