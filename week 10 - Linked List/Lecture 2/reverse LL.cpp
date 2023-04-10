#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;

    Node *next;

    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

Node *reverse(Node *&prev, Node *&curr)
{
    // base case
    if (curr == NULL)
    {
        // LL reverse ho chuki
        return prev;
    }

    // 1 case solve then recursion will take care
    Node *forward = curr->next;
    curr->next = prev;

    return reverse(curr, forward);
}

Node *reverseusingLoop(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node *reverseusingRecursion(Node *prev, Node *curr)
{
    // base case
    if (curr == NULL)
        return prev;

    Node *temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;

    // recursion sambhal lega
    return reverseusingRecursion(prev, curr);
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    Node *prev = NULL;
    Node *curr = first;

    first = reverse(prev, curr);
    // first = reverseusingRecursion(prev, curr);
    // first = reverseusingLoop(first);

    print(first);

    return 0;
}