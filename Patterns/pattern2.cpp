#include<bits/stdc++.h>
using namespace std;

void showPattern(int num) {
    for(int i = 0; i <= num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    showPattern(5);
    return 0;
}