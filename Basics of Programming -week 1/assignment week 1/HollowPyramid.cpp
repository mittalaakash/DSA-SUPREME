#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        // method 1
        for (int col = 0; col < 2 * rowCount - 1; col++)
        {
            if (col < rowCount - row - 1)
                cout << " ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || row == rowCount - 1)
                cout << "*";
            else
                cout << " ";
        }
        for (int col = row; col > 0; col--)
        {
            if (col == 1 || row == rowCount - 1)
                cout << "*";
            else
                cout << " ";
        }

        // method 2
        // int k = 0;
        // for (int col = 0; col < 2 * rowCount - 1; col++)
        // {
        //     if (col < rowCount - row - 1)
        //         cout << " ";
        //     else if (k < 2 * row + 1)
        //     {
        //         if (k == 2 * row || k == 0 || row == rowCount - 1)
        //             cout << "*";
        //         else
        //             cout << " ";
        //         k++;
        //     }
        //     else
        //         cout << " ";
        // }

        cout << endl;
    }
}
//       Input: 6
//            *
//           * *
//          *   *
//         *     *
//        *       *
//       ***********
