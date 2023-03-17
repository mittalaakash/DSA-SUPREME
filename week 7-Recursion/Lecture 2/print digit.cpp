#include <iostream>
#include <vector>

using namespace std;

void print(int num)
{
    if (num == 0)
        return;

    print(num / 10);

    int value = num % 10;
    cout << value << endl;
}

int main()
{
    int num = 647;
    print(num);
    return 0;
}