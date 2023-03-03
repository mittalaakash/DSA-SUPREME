#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount; col++)
        {
            if (row == 0 || col == 0 || col == rowCount - row - 1)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
//       Input: 5
//       * * * * *
//       *     *
//       *   *
//       * *
//       *