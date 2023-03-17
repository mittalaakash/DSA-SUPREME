#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << "." << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c = c * (i - j) / j;
        }
        cout << endl;
    }

    return 0;
}