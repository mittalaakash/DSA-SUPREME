#include <bits/stdc++.h>

using namespace std;

void insertAtBottom(stack<int> &s, int target)
{
    // base case
    if (s.empty())
    {
        // adding target to stack when it's empty
        s.push(target);
        return;
    }

    int topElement = s.top(); // stack should never be empty while accessing top()
    s.pop();
    // rec cal
    insertAtBottom(s, target);
    // BT
    s.push(topElement);
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    if (s.empty())
    {
        cout << "stack is empty, cant insert at bottom" << endl;
        return 0;
    }

    int target = s.top();
    s.pop();
    insertAtBottom(s, target);

    //"Printing"
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}