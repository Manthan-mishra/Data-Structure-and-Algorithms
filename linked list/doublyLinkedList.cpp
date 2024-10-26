#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
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
    cout << endl;
}

int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

void print_at_beg(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void print_at_end(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void print_at_position(Node *&head, int data, int position)
{
    Node *node2 = new Node(data);
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    node2->next = temp->next;
    (temp->next)->prev = node2;
    temp->next = node2;
    node2->prev = temp;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    print_at_beg(head, 10);
    print_at_end(tail, 15);
    print_at_position(head, 12, 3);
    print_at_position(head, 100, 3);
    print(head);
    cout << "length of linked list " << getLength(head) << endl;
    cout << "value of head " << head->data << endl;
    cout << "value of tail " << tail->data;
    return 0;
}