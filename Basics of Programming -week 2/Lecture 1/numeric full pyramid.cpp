#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "_";
        }

        // numbers
        for (int col = 0; col < row + 1; col++)
        {
            cout << row + col + 1;
        }

        // reverse counting
        int num = 2 * row;
        for (int col = 0; col < row; col++)
        {
            cout << num;
            num = num - 1;
        }
        cout << endl;
    }
}

//            Input : 5
//            ____1
//            ___232
//            __34543
//            _4567654
//            567898765