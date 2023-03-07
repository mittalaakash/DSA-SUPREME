#include <iostream>
using namespace std;

void pattern(int N)
{
    cout << "." << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            cout << " ";
        }
        int k = 1;
        for (int j = 0; j < 2 * i + 1; j++)
        {

            if (j < i + 1)
            {
                cout << k;
                k++;
            }
            else if (j == i + 1)
            {
                k -= 2;
                cout << k;
                k--;
            }
            else
            {
                cout << k;
                k--;
            }
            // other way
            //  if (j < i + 1)
            //  {
            //      cout << k;
            //      k++;
            //  }
            //  else
            //  {
            //      k -= 2;
            //      cout << k;
            //      k++;
            //  }
        }
        cout << endl;
    }
}

int main()
{
    int N = 8;
    pattern(N);

    return 0;
}

//     1
//    121
//   12321
//  1234321
// 123454321