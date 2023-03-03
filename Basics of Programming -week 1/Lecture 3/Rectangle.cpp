#include <iostream>
using namespace std;
int main()
{
    int rowCount, colCount;
    cin >> rowCount >> colCount;
    for (int i = 0; i < rowCount; i++)
    {
        for (int j = 0; j < colCount; j++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}
//       Input:   3 5
//              * * * * *
//              * * * * *
//              * * * * *