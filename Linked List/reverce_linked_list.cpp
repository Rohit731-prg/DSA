#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node (int value) {
        data = value;
        next = NULL;
    }
};

class Linked_list {
    Node* head;
    Node* tail;

    public:
    Linked_list () {
        head = tail = NULL;
    }
    void push_node (int value) {
        Node* temp = new Node(value);
        if (head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    void reverse () {
        Node* pre = NULL;
        Node* next = NULL;
        Node* curr = head;

        if (head == NULL) {
            return;
        }

        tail = head;

        while (curr != NULL) {
            next = curr->next;
            curr->next = pre;

            pre = curr;
            curr = next;
        }

        head = pre;

    }

    void display () {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    Linked_list l1;
    l1.push_node(10);
    l1.push_node(20);
    l1.push_node(30);
    l1.push_node(40);
    l1.push_node(50);

    l1.display();

    l1.reverse();
    l1.display();

    return 0;
}