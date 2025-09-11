// implement merge sort using array/vector

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &vc, int start, int mid, int end) {
    cout << "Merging " << start << " to " << mid << " to " << end << endl;
    vector<int> temp;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end) {
        cout << "Comparing " << vc[i] << " and " << vc[j] << endl;
        if (vc[i] <= vc[j]) temp.push_back(vc[i++]);
        else temp.push_back(vc[j++]);
    }

    while (i <= mid) temp.push_back(vc[i++]);
    while (j <= end) temp.push_back(vc[j++]);

    // copy back to original array
    for (int k = 0; k < temp.size(); k++) {
        vc[start + k] = temp[k];
    }
}

void merge_sort(vector<int> &arr, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        // sort first half
        cout << "Calling merge_sort for first merge" << start << " to " << mid << endl;
        merge_sort(arr, start, mid);
        cout << "First half " << start << " to " << mid << endl;
        // sort second half
        cout << "Calling merge_sort for second merge" << mid + 1 << " to " << end << endl;
        merge_sort(arr, mid + 1, end);
        cout << "Second half " << mid + 1 << " to " << end << endl;
        // merge the sorted halves
        merge(arr, start, mid, end);
    }
}

int main() {
    vector<int> vc = {10, 15, 12, 16, 20, 18};
    merge_sort(vc, 0, vc.size() - 1);

    cout << "Sorted array: ";
    for (int num : vc) {
        cout << num << " ";
    }

    return 0;
}