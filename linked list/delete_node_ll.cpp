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

    ~Node()

    {
        cout << "yaha aaya";
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value;
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

void delete_node(Node *&head, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        // clear memory
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
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
    Node *node2 = new Node(10);
    Node *head = node2;
    Node *tail = node2;
    insert_at_beg(head, 5);
    insert_at_end(tail, 15);
    insert_at_between(head, 3, 12);
    insert_at_between(head, 2, 12);
    print(head);
    delete_node(head, 2);
    print(head);

    return 0;
}