#include <iostream>
#include <vector>

#define MAX 5
using namespace std;

bool isSafe(int x, int y, int row, int col, int arr[][MAX], vector<vector<bool>> &visited)
{ // conditions for safety
  //=> should be valid index
  //=> not blocked
  //=> not visited

    if ((x >= 0 && x < row) && (y >= 0 && y < col) && (arr[x][y] == 1) && (visited[x][y] == false))
    {
        return true;
    }

    return false;
}

void solveMaze(int arr[MAX][MAX], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{

    // base case
    if (i == row - 1 && j == col - 1)
    {
        // answer found
        path.push_back(output);
        return;
    }

    // Down
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
        // backtracking
        visited[i + 1][j] = false;
    }

    // Left
    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');
        // backtracking
        visited[i][j - 1] = false;
    }

    // Right
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');
        // backtracking
        visited[i][j + 1] = false;
    }

    // Up
    if (isSafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
        // backtracking
        visited[i - 1][j] = false;
    }
}

int main()
{
    int maze[MAX][MAX] = {{1, 0, 0, 0, 0},
                          {1, 1, 1, 1, 1},
                          {1, 1, 1, 0, 1},
                          {0, 0, 0, 0, 1},
                          {0, 0, 0, 0, 1}};
    int row = MAX;
    int col = MAX;

    if (maze[0][0] == 0)
    {
        cout << "No Path exists";
        return 0;
    }

    // create an array to mark visited positions
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    // src value marked as true as rat will be @ initial position
    visited[0][0] = true;

    // vector to store all path strings
    vector<string> path;
    string output = "";

    solveMaze(maze, row, col, 0, 0, visited, path, output); // 0 0 for the initial place (indices)

    for (auto value : path)
    {
        cout << value << " ";
    }

    if (path.size() == 0)
        cout << "No path exists";

    return 0;
}