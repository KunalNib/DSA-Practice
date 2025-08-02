#include <iostream>
using namespace std;
// User defined Data type
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
// Defining a class for Linkedlist
// User Defined Data Structure
class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    // InsertAtend Function for inserting element at the end of LinkedList
    void insertAtend(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    // trying by myself Insert at beginning
    void insertAtbeg(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    // how about insert at given index
    void insert(int val, int idx)
    {
        if (idx == 0)
        {
            insertAtbeg(val);
            return;
        }
        else if (idx == size)
        {
            insertAtend(val);
            return;
        }
        else if (idx > size || idx < 0)
        {
            cout << "Invalid Index" << endl;
            return;
        }
        Node *temp = new Node(val);
        int i = 0;
        Node *t = head;
        while (i < idx - 1)
        {
            t = t->next;
            i++;
        }
        temp->next = t->next;
        t->next = temp;
        size++;
    }
    // Display for Displaying LinkedList
    Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    LinkedList ll;

    ll.insertAtbeg(2);
    ll.insert(1, 0);
    ll.insertAtend(10);
    ll.insertAtend(20);
    ll.Display();
    cout << ll.size << endl;

    ll.insertAtend(30);
    ll.insertAtend(40);
    ll.insertAtend(50);
    ll.Display();
    cout << ll.size << endl;
    ll.insertAtbeg(5);
    ll.Display();
    cout << ll.size << endl;
    ll.insert(35, 4);
    ll.Display();
    cout << ll.size << endl;
    ll.insert(100, 20);
}