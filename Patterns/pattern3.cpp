#include<bits/stdc++.h>
using namespace std;

void printPattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int num = 5;
    printPattern(num);
    return 0;
}