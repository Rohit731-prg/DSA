// implement sum of n numbers using recursion

#include<iostream>
using namespace std;

int sum(int num) {
    if (num == 1) {
        return 1;
    }
    return num + sum(num - 1);
}

int main() {
    int limit = 10;
    int result = sum(limit);
    cout << "Result : " << result;
}