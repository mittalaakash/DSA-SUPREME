#include <bits/stdc++.h>

using namespace std;

unordered_map<int, bool> rowCheck;
unordered_map<int, bool> upperLeftDiagonalCheck;
unordered_map<int, bool> bottomLeftDiagonalCheck;

void printSolution(vector<vector<char>> &board, int n)
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

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    // check if we can place queen on current cell

    // check row
    if (rowCheck[row] == true)
        return false;

    // check upper left diagonal
    if (upperLeftDiagonalCheck[n + 1 + col - row] == true)
        return false;

    // check bottom left diagonal
    if (bottomLeftDiagonalCheck[row + col] == true)
        return false;

    // no queen found, so returning true
    return true;
}

void solve(vector<vector<char>> &board, int col, int n)
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
            board[row][col] = 'Q';
            rowCheck[row] = true;
            upperLeftDiagonalCheck[n + 1 + col - row] = true;
            bottomLeftDiagonalCheck[row + col] = true;

            // recursion
            solve(board, col + 1, n);

            // backtracking
            board[row][col] = '.';
            rowCheck[row] = false;
            upperLeftDiagonalCheck[n + 1 + col - row] = false;
            bottomLeftDiagonalCheck[row + col] = false;
        }
    }
}

int main()
{
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));
    int col = 0;

    // 0=> empty cell
    // 1=> queen placed on cell

    solve(board, col, n);

    return 0;
}