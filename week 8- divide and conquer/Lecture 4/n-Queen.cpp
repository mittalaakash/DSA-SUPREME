#include <bits/stdc++.h>

using namespace std;

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
    int i = row;
    int j = col;
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        j--;
    }

    // check upper left diagonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i--, j--;
    }

    // check bottom left diagonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
            return false;
        i++, j--;
    }

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

            // recursion
            solve(board, col + 1, n);

            // backtracking
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n = 4;

    // creating the board with no queen
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;

    // '-'=> empty cell
    // 'Q'=> queen placed on cell

    solve(board, col, n);

    return 0;
}