// reverce a double linked list

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int data) {
            this->data = data;
            prev = next = NULL;
        }
};

class linked_list {
    Node* head;
    Node* tail;
    public:
        linked_list() {
            head = tail = NULL;
        }

        void push(int data) {
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

        void reverce() {
            stack<Node*> st;
            Node* temp = head;
            while (temp != NULL) {
                st.push(temp);
                temp = temp->next;
            }

            head = st.top();
            head->prev = NULL;
            temp = head;
            st.pop();
            while (!st.empty()) {
                Node* node = st.top();
                st.pop();

                temp->next = node;
                node->prev = temp;
                temp = node;
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

    return 0;
}