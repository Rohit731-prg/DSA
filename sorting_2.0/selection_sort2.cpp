// This is an implementation of the selection sort algorithm in C++

#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &vc, int size) {
    for (int i = 0; i < size -1; i++) {
        int smallest = i;
        for (int j = i + 1; j < size; j++) {
            if (vc[j] < vc[smallest]) {
                smallest = j;
            }
        }
        swap(vc[i], vc[smallest]);
    }
}

int main() {
    vector<int> vc = {10, 15, 12, 16, 20, 18};
    int size = vc.size();
    selection_sort(vc, size);
    cout << "Sorted array: ";
    for (int num : vc) {
        cout << num << " ";
    }
    return 0;
}