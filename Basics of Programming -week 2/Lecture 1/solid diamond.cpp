#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << endl;
    // above part
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    // lower part
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}

//       Input 5
//           *
//          * *
//         * * *
//        * * * *
//       * * * * *
//       * * * * *
//        * * * *
//         * * *
//          * *
//           *