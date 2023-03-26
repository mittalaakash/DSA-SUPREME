#include <bits/stdc++.h>

using namespace std;

bool isSafe(int value, vector<vector<char>> &board, int curr_row, int curr_col)
{
    // row check
    for (int col = 0; col < 9; col++)
    {
        if (board[curr_row][col] == value)
            return false;
    }

    // column check
    for (int row = 0; row < 9; row++)
    {
        if (board[row][curr_col] == value)
            return false;
    }

    // 3x3 box check

    for (int i = 0; i < 9; i++)
    {
        if (board[3 * (curr_row / 3) + (i / 3)][3 * (curr_col / 3) + (i % 3)] == value)
        {
            return false;
        }
    }
    return true;
}

// bool solve(int board[9][9], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             for (int value = 1; value <= n; value++)
//             {

//                 // check for empty cell
//                 if (isSafe(value, board, i, j))
//                 {
//                     // insert
//                     board[i][j] = value;

//                     // recursion
//                     bool restSolution = solve(board, n);

//                     if (restSolution == true)
//                         return true;

//                     // backtracking
//                     board[i][j] = 0;
//                 }
//             }
//         }
//     }
//     return true;
// }

// bool solve(int board[9][9], int n)
// {
//     int row, col;
//     bool isEmpty = false;

//     for (row = 0; row < n; row++)
//     {
//         for (col = 0; col < n; col++)
//         {
//             if (board[row][col] == 0)
//             {
//                 isEmpty = true;
//                 break;
//             }
//         }
//         if (isEmpty)
//         {
//             break;
//         }
//     }

//     // If there is no empty cell, the board is solved
//     if (!isEmpty)
//     {
//         return true;
//     }

//     for (int value = 1; value <= n; value++)
//     {
//         if (isSafe(value, board, row, col))
//         {
//             board[row][col] = value;

//             if (solve(board, n))
//             {
//                 return true;
//             }

//             board[row][col] = 0;
//         }
//     }

//     // if none of the values work, backtrack and return false
//     return false;
// }

bool solve(vector<vector<char>> &board)
{
    int n = board.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // check for empty cell
            if (board[i][j] == '0')
            {
                // try to fill vales [1,9]
                for (char val = '1'; val <= '9'; val++)
                {
                    // check for safety
                    if (isSafe(val, board, i, j))
                    {
                        // insert
                        board[i][j] = val;

                        // reucusion
                        bool restSolution = solve(board);
                        if (restSolution == true)
                            return true;
                        else
                        {
                            // backtrack
                            board[i][j] = '0';
                        }
                    }
                }
                // no valid value from [1,9] , so go back by retuirning false
                return false;
            }
        }
    }
    // all celss filled
    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'4', '5', '0', '0', '0', '0', '0', '0', '0'},
        {'0', '0', '2', '0', '7', '0', '6', '3', '0'},
        {'0', '0', '0', '0', '0', '0', '0', '2', '8'},
        {'0', '0', '0', '9', '5', '0', '0', '0', '0'},
        {'0', '8', '6', '0', '0', '0', '2', '0', '0'},
        {'0', '2', '0', '6', '0', '0', '7', '5', '0'},
        {'0', '0', '0', '0', '0', '0', '4', '7', '6'},
        {'0', '7', '0', '0', '4', '5', '0', '0', '0'},
        {'0', '0', '8', '0', '0', '9', '0', '0', '0'},
    };

    int n = 9;

    solve(board);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}