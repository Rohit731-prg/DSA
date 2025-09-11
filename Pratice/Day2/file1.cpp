// WAP that takes a input and return if you are adult or not

#include<bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;
    
    if (age >= 18) {
        cout << "You are an Adult" << endl;
    } else {
        cout << "You are not an Adult" << endl;
    }
}