#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int currSize, cap;
    int f, r;

public:
    Queue(int size)
    {
        cap = size;
        f = 0;
        r = -1;
        currSize = 0;
        arr = new int[cap];
    }

    void push(int data)
    {
        if (currSize == cap)
        {
            cout << "Queue is full." << endl;
            return;
        }
        r = (r + 1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop()
    {
        if (empty())
        {
            cout << "Queue is emplty" << endl;
            return;
        }

        f = (f + 1) % cap;
        currSize--;
    }

    int front()
    {
        return arr[f];
    }

    bool empty()
    {
        return currSize == 0;
    }

    void display()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        int count = currSize;
        int i = f;
        while (count--)
        {
            cout << arr[i] << " ";
            i = (i + 1) % cap;
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();

    q.pop();
    q.display();

    int f = q.front();
    cout << f << endl;

    return 0;
}