#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node (int value) {
        data = value;
        next = prev = NULL;
    }
};

class Linked_list {
    Node* head;
    Node* tail;

    public:
    Linked_list () {
        head = tail = NULL;
    }

    void push_front(int value) {
        Node* temp = new Node(value);

        if (head == NULL) {
            head = tail = temp;
            return;
        } else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main() {
    Linked_list l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_front(40);
    l1.push_front(50);

    l1.display();
    
    return 0;
}