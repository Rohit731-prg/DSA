// Selection Sort

#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& vc, int size) {
    for (int i = 0; i < size -1; i++) {
        int min_value = i;
        for (int j = i + 1; j < size; j++) {
            if (vc[j] < vc[min_value]) {
                min_value = j;
            }
        }
        swap(vc[i], vc[min_value]);
    }

    cout << "Sorted array: ";
    for (int num : vc) {
        cout << num << " ";
    }
}

int main() {
    vector<int> vc = {10, 15, 12, 16, 20, 18};
    int size = vc.size();
    selection_sort(vc, size);
    return 0;
}