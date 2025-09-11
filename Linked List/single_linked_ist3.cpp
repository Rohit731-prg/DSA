#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Linked_list {
    Node* head = NULL;
    Node* tail = NULL;

    public:
    Linked_list() {
        head = tail = NULL;
    }

    void push_node(int value) {
        Node* temp = new Node(value);
        if (head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
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

    void insert(int value, int possition) {
        if (possition < 0) {
            cout << "Invalid possition" << endl;
            return;
        } else if (possition == 0) {
            push_node(value);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < possition - 1; i++) {
            temp = temp->next;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void search(int value) {
        Node* temp = head;
        int count = 0;
        while (temp != NULL) {
            if (temp->data == value) {
                cout << "Found index no : " << count << endl;
                return;
            }
            count++;
            temp = temp->next;
        }
    }
};

int main() {
    Linked_list l1;
    l1.push_node(10);
    l1.push_node(20);
    l1.push_node(30);
    l1.push_node(40);
    l1.push_node(50);
    l1.push_node(60);

    l1.display();

    l1.insert(100, 3);
    l1.display();

    l1.search(30);

    return 0;
}