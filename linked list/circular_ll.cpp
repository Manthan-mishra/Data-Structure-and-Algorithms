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

void insert_data(Node *&tail, int ele, int data)
{
    if (tail == NULL)
    {
        cout << "Linkedlist is empty" << endl;
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != ele)
        {
            temp = temp->next;
        }
        if (temp->next == tail)
        {
            Node *newNode = new Node(data);
            temp->next = newNode;
            newNode->next = tail;
        }
        else
        {
            Node *newNode = new Node(data);
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

void print(Node *&tail)
{
    if (tail == tail->next)
    {
        cout << tail->data << endl;
    }
    else
    {
        Node *temp = tail;
        int count = 0;
        while (temp != tail || count != 1)
        {
            if (temp == tail)
            {
                count++;
            }
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{

    Node *tail = NULL;
    int length = 0;
    insert_data(tail, 2, 1);
    print(tail);
    cout << "tail at " << tail->data << endl;
    insert_data(tail, 1, 2);
    print(tail);
    cout << "tail at " << tail->data << endl;
    insert_data(tail, 1, 10);
    print(tail);
    cout << "tail at " << tail->data << endl;
    insert_data(tail, 2, 100);
    print(tail);
    cout << "tail at " << tail->data << endl;
    insert_data(tail, 10, 200);
    print(tail);
    cout << "tail at " << tail->data << endl;
    return 0;
}