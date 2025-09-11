// implement a Stack using Linked List

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = NULL;
    }
};

class Stack {
    Node* top;
    Node* bottom;

    public:
    Stack() {
        top = NULL;
        bottom = NULL;
    }
    void push(int value) {
        Node* temp = new Node(value);
        if(top == NULL) {
            top = temp;
            bottom = temp;
        } else {
            temp->next = top;
            top = temp;
        }
    }

    void pop() {
        if (top == NULL) return;
        Node* temp = top;
        top = top->next;

        delete temp;
    }

    int topValue() {
        if (top == NULL) {
            cout << "Stack is empty!" << endl;
            return -1; // Or throw exception
        }
        return top->data;
    }

    bool empty() {
        return top == NULL;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    while(!s.empty()) {
        cout << s.topValue() << endl;
        s.pop();
    }

    return 0;
}