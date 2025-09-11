#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseAString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string str = "ddemomo";
    string reversed = reverseAString(str);

    cout << "Reversed string: " << reversed << endl;
    return 0;
}
