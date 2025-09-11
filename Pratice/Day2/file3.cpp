#include<bits/stdc++.h>
using namespace std;

int main () {
    int age;
    cout << "Enter Age : ";
    cin >> age;

    if ( age < 18 ) {
        cout << "You are not elegible to Job" << endl;
    } else if ( age > 57 ) {
        cout << "You're time is tobe spent with family" << endl;
    } else {
        if ( age >=55 ) {
            cout << "You're time is soon spent with family but yor're elegible to job" << endl;
        } else {
            cout << "You're elegible to job" << endl;
        }
    }
}