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

    void push_back(int value) {
        Node* temp = new Node(value);
        if (head == NULL) {
            head = tail = temp;
            return;
        } else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    void pop_front() {
        Node* temp = head;
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        } else {
            head = head->next;
            head->prev = NULL;
            delete temp;
        }
    }

    void pop_back() {
        Node* temp = tail;

        if (tail == NULL) {
            cout << "List is empty" << endl;
            return;
        } else {
            temp->prev->next = NULL;
            tail = temp->prev;
            delete temp;
        }
    }

    void display() {
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
    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_front(40);
    l1.push_front(50);
    l1.display();

    l1.push_back(60);
    l1.push_back(70);
    l1.display();

    l1.pop_front();
    l1.display();

    l1.pop_back();
    l1.display();

    return 0;
}