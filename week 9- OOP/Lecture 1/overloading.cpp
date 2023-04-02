#include <bits/stdc++.h>

using namespace std;

class Param
{
public:
    int val;

    void operator+(Param &obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;

        cout << (value1 - value2) << endl;
    }
};

int main()
{
    Param obj1, obj2;
    obj1.val = 7;
    obj2.val = 5;

    obj1 + obj2; // overloaded opertor to show differenc instead of addition

    return 0;
}