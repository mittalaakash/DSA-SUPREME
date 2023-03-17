#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        int place = 0;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == place)
            {
                cout << c;
                c++;
                place += 2;
            }
            else
                cout << "*";
        }
        cout << endl;
    }
    c = c - n;
    for (int i = 0; i < n; i++)
    {
        int k = c;
        int place = 0;
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            if (j == place)
            {
                cout << k;
                k++;
                place += 2;
            }
            else
                cout << "*";
        }
        c = c - n + i + 1;
        cout << endl;
    }

    return 0;
}