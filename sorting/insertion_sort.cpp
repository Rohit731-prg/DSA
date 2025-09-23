// insertion sort.cpp

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vc, int size) {
    for (int i = 1; i < size; i++) {
        int curr = vc[i];
        int prev = i - 1;
        while (prev >= 0 && vc[prev] > curr) {
            vc[prev + 1] = vc[prev];
            prev--;
        }
        vc[prev + 1] = curr;
    }
}

int main() {
    vector<int> vc = {10, 15, 12, 16, 20, 18};
    int size = vc.size();
    insertion_sort(vc, size);
    cout << "Sorted array: ";
    for (int num : vc) {
        cout << num << " ";
    }
    return 0;
}