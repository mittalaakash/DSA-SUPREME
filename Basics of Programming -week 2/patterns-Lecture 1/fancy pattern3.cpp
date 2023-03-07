#include <iostream>
#include <vector>

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
    return 0;
}

//            3
//            44
//            555
//            6666
//            77777
//            77777
//            6666
//            555
//            44
//            3