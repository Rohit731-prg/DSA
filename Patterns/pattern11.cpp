#include <iostream>
using namespace std;

void printPattern(int num) {
    for (int i = 0; i < num; i++) {
        for(int j = 0; j <= i; j++) {
            if(j % 2 == 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    int num = 5;
    printPattern(num);
    return 0;
}