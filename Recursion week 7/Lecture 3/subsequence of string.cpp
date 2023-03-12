#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printSubsequences(string str, string output, int i, int &num)
{
    if (i == str.length())
    {
        cout << num << " " << output << endl;
        num++;
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1, num);
    // include
    output.push_back(str[i]);
    printSubsequences(str, output, i + 1, num);
}

int main()
{
    int num = 1;
    string str = "abc";
    string output = "";
    int i = 0;
    int n = str.length();

    printSubsequences(str, output, i, num);
    return 0;
}