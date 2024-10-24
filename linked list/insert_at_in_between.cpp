#include <iostream>
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

void insert_at_between(Node *&head, int position, int data)
{
    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void insert_at_beg(Node *&head, int data)
{
    Node *node2 = new Node(data);
    node2->next = head;
    head = node2;
}

void insert_at_end(Node *&tail, int data)
{
    Node *node2 = new Node(data);
    tail->next = node2;
    tail = node2;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *node2 = new Node(10);
    Node *head = node2;
    Node *tail = node2;
    insert_at_beg(head, 5);
    insert_at_end(tail, 15);
    insert_at_between(head, 3, 12);
    insert_at_between(head, 2, 12);
    print(head);

    return 0;
}