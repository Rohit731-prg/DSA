// bubble sort implementation in C++

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &vc, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (vc[j] > vc[j + 1]) {
                swap(vc[j], vc[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> vc = {15, 10, 5, 20, 25};
    int size = vc.size();
    bubble_sort(vc, size);

    cout << "Sorted array: ";
    for (int i : vc) {
        cout << i << " ";
    }
}