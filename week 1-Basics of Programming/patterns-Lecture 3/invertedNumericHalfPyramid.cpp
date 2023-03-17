#include <iostream>
using namespace std;
int main()
{
    int rowCount;
    cin >> rowCount;
    for (int row = 0; row < rowCount; row++)
    {
        for (int col = 0; col < rowCount - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }
}
//      Input: 5
//          1 2 3 4 5
//          1 2 3 4
//          1 2 3
//          1 2
//          1