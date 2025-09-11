#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 0; i < num; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < (2 * (num - i)) - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    printPattern(5);
    return 0;
}
