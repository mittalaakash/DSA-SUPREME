#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "_";
        }
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0 || row == n - 1)
            {
                if (col % 2 == 0)
                {
                    cout << start;
                    start++;
                }
                else
                    cout << " ";
            }
            else
            {
                if (col == 0)
                    cout << col + 1;
                else if (col == 2 * row)
                    cout << row + 1;
                else
                    cout << " ";
            }
        }

        cout << endl;
    }
}
//          input: 5
//          ____1
//          ___1 2
//          __1   3
//          _1     4
//          1 2 3 4 5