#include<bits/stdc++.h>
using namespace std;

void showPattern(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= (num - i) + 1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) -1; j++) {
            cout << "*";
        }
        for (int j = 1; j <= (num - i) + 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int num = 5;
    showPattern(num);
    return 0;
}