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

int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

Node *reverseKNodes(Node *&head, int k)
{

    if (head->next == NULL)
    {
        cout << "LL is empty";
        return NULL;
    }

    int length = getLength(head);

    if (length > k)
        return head;

    // it means number of nodes in LL is >=k
    //  step 1: reverse first k nodes of LL
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step 2: recursive call
    if (forward != NULL)
    {
        head->next = reverseKNodes(forward, k);
    }

    // step 3:
    return prev;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    print(first);
    first = reverseKNodes(first, 3);
    print(first);

    return 0;
}