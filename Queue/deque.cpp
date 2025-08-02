#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

class Queue
{
public:
    Node *f;
    Node *b;
    int length;
    Queue()
    {
        f = NULL;
        b = NULL;
        length = 0;
    }
    void pushAtback(int val)
    {
        Node *temp = new Node(val);
        if (length == 0)
        {
            f = b = temp;
        }
        else
        {
            b->next = temp;
            temp->prev = b;
            b = temp;
        }
        length++;
    }

    void pushAtfront(int val)
    {
        Node *temp = new Node(val);
        if (length == 0)
        {
            f = b = temp;
        }
        else
        {
            temp->next = f;
            f->prev = temp;
            f = temp;
        }
        length++;
    }

    void popAtfront()
    {
        if (length == 0)
        {
            cout << "UnderFlow ERROR!";
            return;
        }
        Node *temp = f;
        f = f->next;
        f->prev = NULL;
        length--;
        delete (temp);
    }
    void popAtback()
    {
        if (length == 0)
        {
            cout << "UnderFlow ERROR!";
            return;
        }
        Node *temp = b;
        b = b->prev;
        b->next = NULL;
        length--;
    }

    int size()
    {
        return length;
    }

    int front()
    {
        if (length == 0)
        {
            cout << "Queue is Empty";
            return 0;
        }
        return f->val;
    }
    int back()
    {
        if (length == 0)
        {
            cout << "Queue is Empty";
            return 0;
        }
        return b->val;
    }

    void display()
    {
        Node *temp = f;
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

    Queue q;
    q.pushAtback(10);
    q.pushAtfront(11);
    q.pushAtback(12);
    q.pushAtfront(13);
    q.pushAtfront(14);

    q.display();
    q.popAtfront();
    q.popAtback();
    q.display();
    cout << q.front() << endl;
    cout << q.size() << endl;
}