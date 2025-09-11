#include <bits/stdc++.h>
using namespace std;

class Queue {
    vector<int> data;
    
public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (data.size() == 0) {
            cout << "Vector is empty..!";
            return;
        }

        data.erase(data.begin());
    }

    void display() {
        if (data.size() == 0) {
            cout << "Vector is empty..!";
            return;
        }
        for (int val : data) {
            cout << val << " ";
        }
        cout << endl;
    }

    int front() {

    }
};

int main()
{
    Queue q;
    for (int i = 10; i <= 100; i += 10)
    {
        q.push(i);
    }

    q.display();

    q.pop();
    q.display();

    return 0;
}