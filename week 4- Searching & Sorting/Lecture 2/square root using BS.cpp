#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int findSqrt(int target)
{
    int start = 0;
    int end = target;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == target)
            return mid;
        else if (mid * mid < target)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int target;
    cin >> target;

    int ans = findSqrt(target);
    cout << "Answer is: " << ans;

    int precision;
    cout << "Enter the number of floating digits in precision" << endl;
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = ans; j * j <= target; j += step)
        {
            finalAns = j;
        }
        step /= 10;
    }
    cout << "final ans is: " << setprecision(11) << finalAns << endl;
    return 0;
}