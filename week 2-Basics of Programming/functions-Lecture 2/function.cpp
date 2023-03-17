#include <iostream>
using namespace std;

int addValue(int x, int y)
{
    return x + y;
};
int findMax(int x, int y, int z);
char getGrade(int marks);
int findSum(int n);
int getEvenSum(int n);

int main()
{
    int n;
    cout << "enter the value n" << endl;
    cin >> n;
    // int sum = addValue(a, b);
    int sum = getEvenSum(n);
    cout << "sum of n numbers" << sum;
    return 0;
}

int findMax(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (z > y && z > x)
    {
        return z;
    }
    else
        return y;
}

char getGrade(int marks)
{
    switch (marks / 10)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    default:
        return 'E';
        break;
    }
}
int findSum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int getEvenSum(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum = sum + i;
    }
    return sum;
}