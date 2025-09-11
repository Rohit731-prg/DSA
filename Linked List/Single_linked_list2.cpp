#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Linked_List
{
    Node *head;
    Node *tail;

public:
    Linked_List()
    {
        head = tail = NULL;
    }

    void Push_Node(int value)
    {
        Node *temp = new Node(value);
        if (head == NULL)
        {
            head = tail = temp;
            return;
        }
        else
        {
            temp->next = head;
            head = temp;
            return;
        }
    }

    void push_back(int value)
    {
        Node *temp = new Node(value);
        if (head == NULL)
        {
            head = tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        else
        {
            cout << head->data << " is deleted" << endl;
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_Back()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            cout << tail->data << " is deleted" << endl;
            delete tail;
            tail = temp;
            tail->next = NULL;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Linked_List myList;

    myList.Push_Node(10);
    myList.Push_Node(20);
    myList.Push_Node(30);

    myList.display();

    myList.push_back(40);
    myList.display();

    myList.pop_front();
    myList.display();

    myList.pop_Back();
    myList.display();

    return 0;
}