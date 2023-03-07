#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int condition = 0;
        if (i < n)
            condition = i + 1;
        else
            condition = n - (i % n) - 1;
        for (int j = 0; j < condition; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

//                *
//                **
//                ***
//                ****
//                *****
//                ******
//                *******
//                ******
//                *****
//                ****
//                ***
//                **
//                *