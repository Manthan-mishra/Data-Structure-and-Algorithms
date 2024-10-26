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

void insert_at_beg(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insert_at_end(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insert_at_position(Node *&head, int data, int position)
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

void delete_beg(Node *&head)
{
    Node *temp = head;
    head = temp->next;
    temp->next->prev = NULL;
    temp->next = NULL;
}

void delete_end(Node *&tail)
{
    Node *temp = tail;
    tail = temp->prev;
    temp->prev->next = NULL;
    temp->prev = NULL;
}

void delete_position(Node *&head, int position)
{
    Node *curr = head->next;
    Node *before = head;
    int count = 2;
    while (count < position)
    {
        curr = curr->next;
        // cout << "current " << curr->data << endl;
        before = before->next;
        // cout << "before " << before->data << endl;
        count++;
    }
    // cout << "current " << curr->data << endl;
    // cout << "before " << before->data << endl;
    before->next = curr->next;
    curr->next->prev = before;
    curr->prev = NULL;
    curr->next = NULL;
}

int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    insert_at_beg(head, 10);
    insert_at_end(tail, 15);
    insert_at_position(head, 12, 3);
    insert_at_position(head, 100, 3);
    print(head);
    cout << "length of linked list " << getLength(head) << endl;
    cout << "value of head " << head->data << endl;
    cout << "value of tail " << tail->data << endl;
    cout << "----------After deleteing from beg-----------" << endl;
    delete_beg(head);
    print(head);
    cout << "length of linked list " << getLength(head) << endl;
    cout << "value of head " << head->data << endl;
    cout << "value of tail " << tail->data << endl;
    cout << "linked list restored" << '\t';
    insert_at_beg(head, 10);
    print(head);
    cout << "----------After deleteing from end-----------" << endl;
    delete_end(tail);
    print(head);
    cout << "length of linked list " << getLength(head) << endl;
    cout << "value of head " << head->data << endl;
    cout << "value of tail " << tail->data << endl;
    cout << "linked list restored" << '\t';
    insert_at_end(tail, 15);
    print(head);
    cout << "----------After deleteing from position-----------" << endl;
    delete_position(head, 3);
    print(head);
    cout << "length of linked list " << getLength(head) << endl;
    cout << "value of head " << head->data << endl;
    cout << "value of tail " << tail->data << endl;
    cout << "linked list restored" << '\t';
    insert_at_position(head, 100, 3);
    print(head);

    return 0;
}