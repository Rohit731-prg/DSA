// implement linear searching in cpp

#include<iostream>
#include<vector>
using namespace std;

void linear_search(vector<int> &vc, int search) {
    for (int i: vc) {
        if (i == search) {
            cout << "Element is present" << endl;
            return;
        }
    }
    cout << "Element is not present" << endl;
}

int main() {
    vector<int> data = {15, 12, 14, 13, 10, 18};
    int search;
    cout << "Enter Search Item : " << endl;
    cin >> search;
    linear_search(data, search);

    return 0;
}