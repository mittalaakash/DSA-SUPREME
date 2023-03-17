#include <iostream>
using namespace std;
int main()
{
    int rowCount, colCount;
    cin >> rowCount >> colCount;
    for (int i = 0; i < rowCount; i++)
    {
        // for (int j = 0; j < colCount; j++)
        // {
        //     if (i == 0 || i == rowCount - 1 || j == 0 || j == colCount - 1)
        //     {
        //         cout << "* ";
        //     }
        //     else
        //     {
        //         cout << "  ";
        //     }
        // }
        // cout << endl;

        // OR

        if (i == 0 || i == rowCount - 1)
        {
            for (int j = 0; j < colCount; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
        else
        {
            cout << "*";
            for (int j = 0; j < colCount - 2; j++)
            {
                cout << " ";
            }
            cout << "*\n";
        }
    }
}
// Input: 4 6
//          ******
//          *    *
//          *    *
//          ******