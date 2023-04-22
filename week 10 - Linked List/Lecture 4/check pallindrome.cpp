#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *reverse(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *next = curr->next;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool checkPallindrome(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return true;
    }
    if (head->next == NULL)
    {
        // only 1 node
        return true;
    }

    //>1 node in LL

    // step 1: find the middle node;
    Node *slow = head;
    Node *fast = head->next;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {

            fast = fast->next;
            slow = slow->next;
        }
    }

    // slow pointer is pointing to the middle node

    // step 2 reverse LL after middle node
    Node *reverseLLHead = reverse(slow->next);

    // join the reversed LL with slow node
    slow->next = reverseLLHead;

    // step 3
    Node *temp1 = head;
    Node *temp2 = reverseLLHead;

    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            // not pallindrome
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(20);
    Node *fifth = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    bool isPallindrome = checkPallindrome(first);

    if (isPallindrome)
    {
        cout << "valid pallindrome";
    }
    else
        cout << "not a valid pallindrome";

    return 0;
}