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

    void push_node(int value)
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

    void middle_linked_list()
    {
        Node *fast;
        Node *slow;
        fast = slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        cout << "Middle element is : " << slow->data << endl;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Linked_List l1;
    l1.push_node(10);
    l1.push_node(20);
    l1.push_node(30);
    l1.push_node(40);
    l1.push_node(50);
    l1.push_node(60);

    l1.display();

    l1.middle_linked_list();

    return 0;
}