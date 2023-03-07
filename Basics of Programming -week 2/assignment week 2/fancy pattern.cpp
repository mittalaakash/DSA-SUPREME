#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int place = 8 - i;
        int num = i + 1;
        int count_num = num;
        for (int j = 0; j < 17; j++)
        {
            if (j == place && count_num > 0)
            {
                cout << num;
                place += 2;
                count_num--;
            }
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}

// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****