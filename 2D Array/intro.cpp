#include <iostream>
#include <cstdint>

using namespace std;

int main()
{
    int arr[3][3] = {{1, 5, 3}, {7, 6, 9}, {4, 8, 2}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << '\t';

            // 1	5	3
            // 7	6	9
            // 4	8	2
        };
        cout << endl;
    };
    return 0;
}