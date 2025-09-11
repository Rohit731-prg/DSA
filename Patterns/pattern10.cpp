#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 0; i <= num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = num - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int num = 5;
    printPattern(num);
    return 0;
}