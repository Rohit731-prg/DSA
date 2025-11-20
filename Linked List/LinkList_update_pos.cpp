#include <iostream>
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

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = tail = NULL;
    }

    void push_front(int value) {
        Node* temp = new Node(value);
        if (head == NULL) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
    }

    void display() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        while (temp != NULL) {
            cout << "Data: " << temp->data << endl;
            temp = temp->next;
        }
    }

    //---------------------------------------------
    // Update node by POSITION (1-based index)
    //---------------------------------------------
    void update(int pos, int value) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        int index = 1;

        while (temp != NULL && index < pos) {
            temp = temp->next;
            index++;
        }

        if (temp == NULL) {
            cout << "Invalid position!" << endl;
            return;
        }

        temp->data = value;
        cout << "Updated position " << pos << " to value " << value << endl;
    }

    //---------------------------------------------
    // Or: Update node by searching the VALUE
    // (Uncomment if you want this version instead)
    //---------------------------------------------
    /*
    void updateByValue(int oldValue, int newValue) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == oldValue) {
                temp->data = newValue;
                cout << "Updated " << oldValue << " to " << newValue << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found!" << endl;
    }
    */
};

int main() {
    List myList;

    myList.push_front(10);
    myList.push_front(20);
    myList.push_front(30);

    myList.display();
    cout << "--------------" << endl;

    myList.update(2, 99);   // Update value at position 2
    myList.display();

    return 0;
}
