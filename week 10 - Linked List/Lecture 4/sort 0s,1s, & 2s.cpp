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

void sortWithCount(Node *&head)
{ // step 1 count the 0s, 1s and 2s
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
            temp = temp->next;
        }
        else if (temp->data == 1)
        {
            oneCount++;
            temp = temp->next;
        }
        else if (temp->data == 2)
        {
            twoCount++;
            temp = temp->next;
        }
    }

    // step 2: fill LL
    // fill 0s
    temp = head;
    while (zeroCount--)
    {
        temp->data = 0;
        temp = temp->next;
    }
    while (oneCount--)
    {
        temp->data = 1;
        temp = temp->next;
    }
    while (twoCount--)
    {
        temp->data = 2;
        temp = temp->next;
    }
}

Node *sortWithDummy(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty " << endl;
        return NULL;
    }
    if (head->next == NULL)
    {
        // single node in LL
        return head;
    }

    // create dummy nodes
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    // traverse the original LL
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            // take out 0s LL
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the zero node in zeroHead LL
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            // take out the 1s LL
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the one node in oneHead LL
            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->data == 2)
        {
            // take out the 2s LL
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            // append the two node in twoHead LL
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // join LLs
    // remove the dummy nodes

    // modify 1s LL
    Node *temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    // modify 2s LL
    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    // join list

    if (oneHead != NULL)
    {
        // 1s LL is not empty
        zeroTail->next = oneHead;
        if (twoHead != NULL)
            oneTail->next = twoHead;
    }
    else
    {
        // 1s list is empty
        if (twoHead != NULL)
            zeroTail = twoHead;
    }

    // remove zerohead dummy node
    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    // return head of the modified linked list
    return zeroHead;
}

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(0);
    Node *fifth = new Node(1);
    Node *sixth = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    // sortWithCount(first);

    Node *head = sortWithDummy(first);

    print(head);

    return 0;
}