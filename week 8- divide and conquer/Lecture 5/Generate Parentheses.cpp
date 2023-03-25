#include <bits/stdc++.h>

using namespace std;

void solve(vector<string> &ans, int n, int open, int close, string &output)
{
    // base case
    if (open == 0 && close == 0)
    {
        ans.push_back(output);
        return;
    }

    // include open bracket
    if (open > 0)
    {
        output.push_back('(');
        solve(ans, n, open - 1, close, output);
        output.pop_back();
    }

    // include close bracket
    if (close > open) // we'll  only include ')' if  ans has more '(' than ')', so remaining ')' > '('
    {
        output.push_back(')');
        solve(ans, n, open, close - 1, output);
        output.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    ans.reserve(pow(2, 2 * n)); // pre-allocate memory for the vector

    int open = n;
    int close = n;
    string output = "";

    solve(ans, n, open, close, output);

    return ans;
}

int main()
{
    int n = 3;

    vector<string> ans = generateParenthesis(n);

    for (auto &m : ans)
        cout << m << " ";

    return 0;
}