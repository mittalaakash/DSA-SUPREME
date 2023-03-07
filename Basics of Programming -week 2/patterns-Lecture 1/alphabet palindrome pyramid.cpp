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
            int ans = col + 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        for (; col > 1; col--)
        {
            int ans = col - 1;
            char ch = ans + 'A' - 1;
            cout << ch;
        }
        cout << endl;
    }
}

//            input:5
//            A
//            ABA
//            ABCBA
//            ABCDCBA
//            ABCDEDCBA