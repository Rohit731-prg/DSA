// implement a stack using array/vector

#include<bits/stdc++.h>
using namespace std;

class Stack {
    vector<int> vc;
    public:
        void push(int data) {
            vc.push_back(data);
        }

        void pop() {
            cout << "poped element : " << vc.back() << endl;
            vc.pop_back();
        }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.pop();
    st.pop();
}