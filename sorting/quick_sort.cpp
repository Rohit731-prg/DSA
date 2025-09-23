// Quick Sort implementation

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &vc, int start, int end) {
    int idx = start - 1;
    int pivot = vc[end];

    for (int j = start; j < end; j++) {
        if (vc[j] <= pivot) {
            idx++;
            swap(vc[j], vc[idx]);
        }
    }

    idx++;
    swap(vc[end], vc[idx]);
    return idx;
}

void quick_sort(vector<int> &vc, int start, int end) {
    if (start < end) {
        int partitionIndex = partition(vc, start, end);
        quick_sort(vc, start, partitionIndex - 1);
        quick_sort(vc, partitionIndex + 1, end);
    }
}

int main() {
    vector<int> vc = {15, 12, 45, 78, 65};
    int size = vc.size();

    quick_sort(vc, 0, size - 1);

    cout << "Sorted List: ";
    for (int i : vc) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}