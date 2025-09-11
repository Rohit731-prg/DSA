// Reverce a double linked list

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data) {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

class Linked_List {
    Node* head;
    Node* tail;

    public:
        Linked_List() {
            head = tail = NULL;
        }

        void push_element(int data) {
            Node* temp = new Node(data);
            if (head == NULL) {
                head = tail = temp;
                return;
            } else {
                tail->next = temp;
                temp->prev = tail;
                tail = tail->next;
                return;  
            }
        }

        void display() {
            cout << endl;
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << ", ";
                temp = temp->next;
            }
            
        }

        void reverce_display() {
            Node* temp = tail;
            cout << endl;
            while (temp != NULL) {
                cout << temp->data << ", ";
                temp = temp->prev;
            }
        }

        void reverce_linked_list() {
            stack<Node*> st;
            Node* temp = head;
            
            while (temp != NULL) {
                st.push(temp);
                temp = temp->next;
            }

            head = st.top();
            st.pop();
            temp = head;
            temp->prev = NULL;

            while (!st.empty()) {
                Node* node = st.top();
                st.pop();

                temp->next = node;
                node->prev = temp;
                temp = node;
            }

            tail = temp;
            tail->next = NULL;
        }
};

int main() {
    Linked_List li;
    li.push_element(10);
    li.push_element(50);
    li.push_element(30);
    li.push_element(70);
    li.push_element(90);

    // cout << "Display without reverceing the linked list" << endl;
    // li.display();
    // cout << "Display in reverce way without changeing the content" << endl;
    // li.reverce_display();
    cout << "Reverce the Linked List" << endl;
    li.reverce_linked_list();
    li.display();
    return 0;
}