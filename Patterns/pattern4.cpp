#include<bits/stdc++.h>
using namespace std;

void printPattern(int num) {
    for(int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    printPattern(5);
    return 0;
}