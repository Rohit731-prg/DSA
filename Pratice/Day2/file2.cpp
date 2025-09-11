#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter your marks : " << endl;
    int marks;
    cin >> marks;

    if ( marks >= 80 && marks <= 100) {
        cout << "Gread A";
    } else if ( marks >= 60 && marks <= 79 ) {
        cout << "Gread B";
    } else if ( marks >= 50 && marks <= 69 ) {
        cout << "Gread C";
    } else if ( marks >= 45 && marks <= 49 ) {
        cout << "Gread D";
    } else {
        cout << "Fail";
    }
}