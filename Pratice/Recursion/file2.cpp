// multiplication with recursion in cpp

#include<iostream>
using namespace std;

int recursion(int num) {
    if(num == 1) {
        return 1;
    }
    return num * recursion(num - 1);
}

int main() {
    int num;
    cout << "Enter the limit : ";
    cin >> num;
    int mul = 1;

    int result = recursion(num);
    cout << "Result : " << result << endl;
}