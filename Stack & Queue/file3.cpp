#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

class Queue
{
    Node *head;
    Node *tail;

public:
    Queue() {
        head = tail = NULL;
    }

    void push(int value)
    {
        Node *temp = new Node(value);
        if (head == NULL)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void pop()
    {
        if (!head)
        {
            cout << "Queue is empty." << endl;
            return;
        }
        Node *temp = head;
        head = temp->next;
        delete temp;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Queue is empty." << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int front() {
        return head->data;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    q.display();

    q.pop();
    q.display();

    int data = q.front();
    cout << data << endl;
}