#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char ch[12] = "hello there";

    ch[3] = '\0';
    ch[5] = '\0';
    ch[8] = '\0';
    cout << ch << endl;

    string S = "hello there";

    S[3] = '\0';
    S[5] = '\0';
    S[8] = '\0';
    cout << S;
    return 0;
}