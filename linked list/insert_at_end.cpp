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
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insert_at_end(tail, 20);
    insert_at_end(tail, 30);
    print(head);

    return 0;
}