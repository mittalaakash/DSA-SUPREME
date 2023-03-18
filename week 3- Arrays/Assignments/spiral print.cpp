#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int total_elements = m * n;

    int startingRow = 0;
    int endlingCol = n - 1;
    int endingRow = m - 1;
    int startingCol = 0;

    int count = 0;

    while (count < total_elements)
    { // print starting row
        for (int i = startingCol; i <= endlingCol && count < total_elements; i++)
        {
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;

        // print ending col
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            ans.push_back(matrix[i][endlingCol]);
            count++;
        }
        endlingCol--;

        // print ending row
        for (int i = endlingCol; i >= startingCol && count < total_elements; i--)
        {
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;

        //  print starting col
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    vector<int> ans = spiralOrder(arr);

    for (auto v : ans)
        cout << v << " ";

    return 0;
}