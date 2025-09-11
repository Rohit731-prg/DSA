#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = tail = NULL;
    }

    void pushElement(int data) {
        Node* temp = new Node(data);
        if (head == NULL) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
            return;
        }
    }

    void printMiddle() {
        Node* fast = head;
        Node* slow = head;

        while (fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }

        cout << "Middlest Element is : " << slow->data << endl;
    }

    void display () {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.pushElement(10);
    list.pushElement(20);
    list.pushElement(30);
    list.pushElement(40);
    list.pushElement(50);

    list.display();
    list.printMiddle();

    return 0;
}