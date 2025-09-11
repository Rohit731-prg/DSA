#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

    public :
    List() {
        head = tail = NULL;
    }

    void push_front(int value) {
        Node* temp = new Node(value); // new keyboard helps to create a new node
        if (head == NULL) {
            head = tail = temp;
            return;
        } else {
            temp->next = head;
            head = temp;
        }
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty" << endl;
        } else {
            Node* temp = head;
            while(head != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
        }
    }
};

int main() {
    List myList;

    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);

    myList.display();

    return 0;
}