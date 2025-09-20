// implement recursion in cpp

#include<iostream>
using namespace std;

void printNum(int number) {
    cout << number << endl;
}

void another() {
    cout << "another function" << endl;
}

void resursion(int num) {
    if (num == 0) {
        cout << "finaly" << endl;
        return;
    }

    printNum(num);
    resursion(num - 1);
    another();
}

int main() {
    int num;
    cout << "Enter limit : ";
    cin >> num;
    
    resursion(num);
    return 0;
}