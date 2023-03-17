#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int decimalToBinary(int n)
{
    // division method
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;

        binaryNo = bit * pow(10, i++) + binaryNo;

        n = n / 2;
    }
    return binaryNo;
}
int decimalToBinary2(int n)
{
    // bitwise method
    int binaryNo = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n & 1;

        binaryNo = bit * pow(10, i++) + binaryNo;

        n = n >> 1;
    }
    return binaryNo;
}

int binaryToDecimal(int n)
{ // division
    int decimal = 0;
    int i = 0;
    while (n)
    {
        int value = n % 10;
        decimal = value * pow(2, i++) + decimal;
        n /= 10;
    }

    return decimal;
}
int binaryToDecimal2(int n)
{ // bitwise
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        cout << "n: " << n << endl;
        int value = n & 1;
        cout << value << endl;
        decimal = value * pow(2, i++) + decimal;
        n /= 10;
    }
    cout << "i:" << i << endl;
    cout << "dim " << decimal << endl;

    return decimal;
}

int main()
{
    int n;
    cin >> n;
    int binary = decimalToBinary2(n);

    cout << n << " binary : " << binary << endl;
    int decimal = binaryToDecimal2(binary);

    cout << binary << " decimal : " << decimal;
    return 0;
}