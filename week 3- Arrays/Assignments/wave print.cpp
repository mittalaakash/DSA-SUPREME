#include <iostream>
#include <vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<int> ans;

    for (int i = 0; i < cols; i++)
    {
        if ((i & 1) == 0)
        {
            for (int j = 0; j < rows; j++)
            {
                ans.push_back(matrix[j][i]);
            }
        }
        else
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                ans.push_back(matrix[j][i]);
            }
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {11, 12, 13}};

    vector<int> ans = wavePrint(arr);

    for (auto v : ans)
        cout << v << " ";

    return 0;
}