class Solution
{
public:
    bool isSafe(int row, int col, vector<vector<char>> &board, char value)
    {
        int n = board.size();

        for (int i = 0; i < n; i++)
        {
            // row check
            if (board[row][i] == value)
                return false;

            // col check
            if (board[i][col] == value)
                return false;

            // 3x3 box
            if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value)
                return false;
        }
        return true;
    }

    bool solve(vector<vector<char>> &board)
    {
        int n = board.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // check for empty cell
                if (board[i][j] == '.')
                {
                    // try to fill vales [1,9]
                    for (char val = '1'; val <= '9'; val++)
                    {
                        // check for safety
                        if (isSafe(i, j, board, val))
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
                                board[i][j] = '.';
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
    void solveSudoku(vector<vector<char>> &board)
    {
        solve(board);
    }
};