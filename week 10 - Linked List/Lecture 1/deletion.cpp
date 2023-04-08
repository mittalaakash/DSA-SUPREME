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

int findLength(Node *&head)
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

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Cannot delete, LL is empty";
        return;
    }

    // deleting first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findLength(head);

    // deleting last node
    if (position == len)
    {
        // find prev
        int i = 1;
        Node *prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        // step2:
        prev->next = NULL;
        // step3:
        Node *temp = tail;
        // step4:
        tail = prev;
        // step5:
        delete temp;
        return;
    }

    // deleting middle node
    // step  : find prev and curr
    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    // step2:
    prev->next = curr->next;
    // step3:
    curr->next = NULL;
    // step4:
    delete curr;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    deleteNode(3, head, tail);
    print(head);

    return 0;
}