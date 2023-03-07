#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n; i++)
    {
        int cond = i < n ? i : (2 * n - i - 2); // 2 * n - i - 1 => change it to make 2 lines in center
        int space_count = 2 * (n - cond - 1);
        for (int j = 0; j < 2 * n; j++)
        {
            if (j <= cond)
                cout << "*";
            else if (space_count > 0)
            {
                cout << " ";
                space_count--;
            }
            else
                cout << '*';
        }
        cout << endl;
    }

    return 0;
}