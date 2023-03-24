#include <bits/stdc++.h>

using namespace std;

void printSolution(vector<vector<int>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << "  ";
        }

        cout << endl;
    }
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    // check if we can place queen on current cell

    // check row
    int i = row;
    int j = col;
    while (j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        j--;
    }

    // check upper left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        i--, j--;
    }

    // check bottom left diagonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 1)
            return false;
        i++, j--;
    }

    // no queen found, so returning true
    return true;
}

void solve(vector<vector<int>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSolution(board, n);
        cout << '\n';
        return;
    }

    // solving first case

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // place queen
            board[row][col] = 1;

            // recursion
            solve(board, col + 1, n);

            // backtracking
            board[row][col] = 0;
        }
    }
}

int main()
{
    int n = 9;
    vector<vector<int>> board(n, vector<int>(n, 0));
    int col = 0;

    // 0=> empty cell
    // 1=> queen placed on cell

    solve(board, col, n);

    return 0;
}