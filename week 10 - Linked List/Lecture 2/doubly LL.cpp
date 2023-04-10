#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->data = data;
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
}

// I want to insert a node right at the head of Linked List
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check for Empty LL
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // step1:
        Node *newNode = new Node(data);
        // step2:
        newNode->next = head;
        // step3:
        head = newNode;
    }
}
// I want to insert a node right at the end of LINKED LIST
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // step1: creatae a node
    Node *newNode = new Node(data);
    // step2: connect woth tail ndoe
    tail->next = newNode;
    // step3: update tail;
    tail = newNode;
}

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

void insertAtPosition(Node *&head, Node *tail, int data, int position)
{
    if (head == NULL)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        if (position == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }
        int len = getLength(head);
        if (position > len)
        {
            insertAtTail(head, tail, data);
            return;
        }
    }
}

void deleteFromPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
        return;
    }
    if (head->next == NULL)
    {
        // single node
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
        return;
    }
    int len = getLength(head);
    if (position > len)
    {
        cout << "please enter a valid position " << endl;
        return;
    }

    if (position == 1)
    {
        // want to delete the first node
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }

    if (position == len)
    {
        // delete last node
        Node *temp = tail;
        tail = tail->prev;
        temp->prev = NULL;
        tail->next = NULL;
        delete temp;
        return;
    }

    // delete from middle of linked list

    // step1: find left, curr, right
    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        left = left->next;
        i++;
    }
    Node *curr = left->next;
    Node *right = curr->next;

    // step2:
    left->next = right;
    // step3:
    right->prev = left;
    // step4:
    curr->next = NULL;
    curr->prev = NULL;
    delete curr;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *head = first;
    Node *tail = third;

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    // print(first);
    // cout << endl;

    insertAtHead(head, tail, 101);

    // cout << endl;
    // print(head);

    // cout << endl;

    insertAtTail(head, tail, 501);

    // cout << endl;
    // print(head);

    // cout << endl;

    insertAtPosition(head, tail, 401, 3);

    cout << endl;
    print(head);
    cout << endl;

    deleteFromPos(head, tail, 10);

    cout << endl;
    print(head);
    cout << endl;

    return 0;
}