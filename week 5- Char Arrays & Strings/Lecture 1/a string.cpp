#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char ch[12] = "hello there";

    ch[3] = '\0';
    ch[5] = '\0';
    ch[8] = '\0';
    cout << ch << endl; // hel => it prints till the first null character

    string S = "hello there";

    S[3] = '\0';
    S[5] = '\0';
    S[8] = '\0';
    cout << S; // hel o th re => prints all characters of string

    string st = "Hello";

    cout << st.length() << endl;

    cout << st.empty() << endl;

    st.push_back('A'); // add 'A' in last of array
    st.pop_back();     // removed last character

    cout << st.substr(0, 6) << endl;

    cout << st.compare("Hello") << endl;

    string sentence = "Hello all";

    cout << sentence.find("Hello") << endl;

    sentence.replace(0, 5, "hi");

    cout << sentence << endl;

    sentence.erase(0, 5);
    cout << sentence << endl;

    return 0;
}