#include <iostream>
#include <vector>
#include <string>

using namespace std;

void converIntoUpperCase(char ch[])
{

    for (int i = 0; ch[i] != '\0'; i++)
    {
        // cout << ch[i] << endl;
        if (ch[i] == ' ')
            continue;
        // ch[i] = ch[i] - 'a' + 'A'; // to upper case
        ch[i] = ch[i] + 'a' - 'A'; // to lower case
    }
}

int main()
{
    char ch[100] = "HELLO THERE";
    converIntoUpperCase(ch);
    cout << ch;
    return 0;
}