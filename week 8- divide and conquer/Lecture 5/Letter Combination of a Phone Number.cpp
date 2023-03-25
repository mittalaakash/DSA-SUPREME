#include <bits/stdc++.h>
using namespace std;

// This function recursively generates all the combinations
// of letters from given digits and stores them in ans
void solve(vector<string> &ans, int index, string &output, string digits, vector<string> &mapping)
{
    // Base case: when we have processed all the digits
    if (index >= digits.length())
    {
        ans.push_back(output); // Add the generated combination to ans
        return;
    }

    // Find the corresponding string of letters for the current digit
    int digit = digits[index] - '0'; // Convert the digit from char to int
    string value = mapping[digit];

    // Loop through each letter in the corresponding string and generate all possible combinations
    for (int i = 0; i < value.length(); i++)
    {
        char ch = value[i];
        output.push_back(ch); // Add the current letter to the output string

        // Recursively generate the combinations for the remaining digits
        solve(ans, index + 1, output, digits, mapping);

        // Backtrack: remove the current letter from the output string before trying the next letter
        output.pop_back();
    }
}

// This function generates all the possible letter combinations for the given digits
vector<string> letterCombinations(string digits)
{
    vector<string> ans; // Stores all the possible combinations

    // Initialization
    int index = 0;      // The current index in digits
    string output = ""; // The current output string

    // If the input string is empty, return the empty vector
    if (digits.length() == 0)
        return ans;

    // Create a mapping of digits to corresponding strings of letters
    vector<string> mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    // Generate all possible letter combinations recursively
    solve(ans, index, output, digits, mapping);

    return ans;
}

int main()
{
    string digits = "427";

    vector<string> ans = letterCombinations(digits);

    for (auto &a : ans)
        cout << a << endl;

    return 0;
}