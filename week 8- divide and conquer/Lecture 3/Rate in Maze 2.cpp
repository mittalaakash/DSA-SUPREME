#include <iostream>
#include <vector>

#define MAX 5
using namespace std;

vector<string> res;

bool isValid(int row, int col, int m[][MAX], int n)
{
    if (row >= 0 && row < n && col >= 0 && col < n && m[row][col] == 1)
    {
        return true;
    }
    return false;
}

void findPathHelper(int m[][MAX], int n, int x, int y,
                    int dx[], int dy[], string path)
{
    if (x == n - 1 && y == n - 1)
    {
        res.push_back(path);
        return;
    }
    string dir = "DLRU";
    for (int i = 0; i < 4; i++)
    {
        int row = x + dx[i];
        int col = y + dy[i];
        if (isValid(row, col, m, n))
        {
            m[row][col] = 2; // used to track visited cells
                             // of matrix
            findPathHelper(m, n, row, col, dx, dy,
                           path + dir[i]);
            m[row][col] = 1; // mark it unvisited yet explorable
        }
    }
}

vector<string> findPath(int m[][MAX], int n)
{
    // dx, dy will be used to follow `DLRU` exploring
    // approach which is lexicographically sorted order
    int dx[] = {1, 0, 0, -1};
    int dy[] = {0, -1, 1, 0};
    if (m[0][0] == 1)
    {
        m[0][0] = 2;
        findPathHelper(m, n, 0, 0, dx, dy, "");
    }
    return res;
}

int main()
{
    int m[MAX][MAX] = {{1, 0, 0, 0, 0},
                       {1, 1, 1, 1, 1},
                       {1, 1, 1, 0, 1},
                       {0, 0, 0, 0, 1},
                       {0, 0, 0, 0, 1}};
    int n = sizeof(m) / sizeof(m[0]);

    findPath(m, n);

    for (int i = 0; i < res.size(); ++i)
        cout << res[i] << ' ';
    return 0;
}
