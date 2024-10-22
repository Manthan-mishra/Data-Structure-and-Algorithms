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

void insert_at_beg(Node *&head, int data)
{
    Node *node2 = new Node(data);
    node2->next = head;
    head = node2;
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
    Node *node1 = new Node(10);
    Node *head = node1;
    print(head);
    insert_at_beg(head, 20);
    print(head);
    insert_at_beg(head, 30);
    print(head);
    // cout << "value of node created: " << node1->data;
    return 0;
}