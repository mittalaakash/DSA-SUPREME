#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        int col = 0;

        for (; col < row + 1; col++)
        {
            cout << col + 1;
        }
        for (; col > 1; col--)
        {
            cout << col - 1;
        }
        cout << endl;
    }
}

//            input : 5
//            1
//            121
//            12321
//            1234321
//            123454321