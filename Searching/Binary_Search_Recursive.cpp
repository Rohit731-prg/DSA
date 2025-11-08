// implement binary search with recursive

#include<iostream>
#include<vector>
using namespace std;

void binary_search(vector<int> &data, int search, int start, int end) {
    if (start > end) {
        cout << "Element is not here" << endl;
    }
    if (start <= end) {
        int mid = (start + end) / 2;
        if (search == data[mid]) {
            cout << "Element is here" << endl;
            return;
        } else if(search < data[mid]) {
            end = mid - 1;
            binary_search(data, search, start, end);
        } else {
            start = mid + 1;
            binary_search(data, search, start, end);
        }
    }
}

int main() {
    vector<int> data = {15, 20, 25, 36, 45, 78};
    int search = 40;
    int end = data.size();
    binary_search(data, search, 0, end - 1);
}