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

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
};

void removeDuplicates(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty" << endl;
        return;
    }
    if (head->next == NULL)
    {
        cout << "single node in LL" << endl;
        return;
    }
    //>1 node

    Node *curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        { // equal case

            Node *temp = curr->next;

            curr->next = curr->next->next;

            // delete node
            temp->next = NULL;
            delete temp;
        }
        else
        { // not equal case
            curr = curr->next;
        }
    }
}

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *fifth = new Node(4);
    Node *sixth = new Node(4);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    removeDuplicates(first);
    print(first);

    return 0;
}