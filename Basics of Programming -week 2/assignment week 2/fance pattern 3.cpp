#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                if (j <= i)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    k -= 2;
                    cout << k;
                    k++;
                }
            }
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        int k = 1;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                cout << "*";
            }
            else
            {
                if (j <= i)
                {
                    cout << k;
                    k++;
                }
                else
                {
                    k -= 2;
                    cout << k;
                    k++;
                }
            }
        }
        cout << endl;
    }

    return 0;
}

//              *
//              *1*
//              *121*
//              *12321*
//              *1234321*
//              *123454321*
//              *1234321*
//              *12321*
//              *121*
//              *1*
//              *