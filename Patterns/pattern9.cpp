#include <iostream>
using namespace std;

void printPatterns(int num) {
    // Upper half (including middle line)
    for (int i = 1; i <= num; i++) {
        // Print leading spaces
        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = num - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= num - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int num = 5;
    printPatterns(num);
    return 0;
}
