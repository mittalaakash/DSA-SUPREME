#include <iostream>
using namespace std;

int main()
{
    int size, s = 3;

    cin >> size;

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << s;
        }
        s++;
        cout << endl;
    }
    s--;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size - row; col++)
        {
            cout << s;
        }
        s--;
        cout << endl;
    }
    // for (int row = 0; row < size; row++)
    // {
    //     for (int col = 0; col < 2 * (size - row) - 1; col++)
    //     {
    //         if ((col + 1) % 2 == 0)
    //             cout << "*";
    //         else
    //             cout << (size - row);
    //     }
    //     cout << endl;
    // }
}

//            Input:5
//            1
//            2*2
//            3*3*3
//            4*4*4*4
//            5*5*5*5*5
//            5*5*5*5*5
//            4*4*4*4
//            3*3*3
//            2*2
//            1