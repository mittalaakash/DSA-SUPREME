#include <iostream>
using namespace std;
int reverse(int x)
{
	bool isNegative = false;
	int ans = 0, remainder = 0;
	if (x <= INT_MIN)
	{
		return 0;
	}
	if (x < 0)
	{
		x = -x;
		isNegative = true;
	}

	int N = x;

	while (N > 0)
	{
		if (ans > INT_MAX / 10)
		{
			return 0;
		}
		int remainder = N % 10;
		ans = ans * 10 + remainder;
		N /= 10;
	};
	return isNegative ? -ans : ans;
}

// best way

// int reverse(int x)
// {
// 	int rev = 0;
// 	while (x != 0)
// 	{
// 		int pop = x % 10;
// 		x /= 10;
// 		if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7))
// 			return 0;
// 		if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8))
// 			return 0;
// 		rev = rev * 10 + pop;
// 	}
// 	return rev;
// }

int main()
{
	int N;
	cin >> N;
	int ans = reverse(N);
	cout << ans;

	return 0;
}