#include <iostream>

using namespace std;

void update(int *p, int *q)
{
    *p = 100; // Updated value present at index 1
    *q = 200; // Updated pointer present at index 2
}

void solve(int *p)
{
    *p = *p + 10; // value at address stored in p is incremented by 10
}

int main()
{

    // int a = 5;
    // int *ptr = &a; // Pointer to integer variable a
    // solve(ptr);    // Pointer is passed to the function
    // cout << a;     // modified value will be printed i.e. 15

    int arr[4] = {10, 20, 30, 40};
    int *p = &arr[1]; // Pointer to 1st index
    int *q = &arr[2]; // Pointer to 2nd index
    update(p, q);     // Passed by reference
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " "; // Array will be printed
    }
    return 0;
}