// Print pattern for

//  input 3
// * ** ***

// input 4
// * ** *** ****

#include <bits/stdc++.h>

using namespace std;

vector<char> printPattern(int N)
{
    vector<char> str;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            str.push_back('*');
        }
        str.push_back(' ');
    }
    return str;
}

int main()
{
    int n = 4;
    vector<char> ans = printPattern(n);

    for (auto &m : ans)
    {
        cout << m;
    }

    return 0;
}