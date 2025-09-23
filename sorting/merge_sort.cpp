// implimention of merge sort

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &vc, int start, int mid, int end) {
    cout << "will call here with " << start << ", " << mid << ", " << end << endl;
    vector<int> temp;
    int i = start;
    int j = mid + 1;

    while (i <= mid && j <= end) {
        if (vc[i] <= vc[j]) {
            temp.push_back(vc[i++]);
        } else {
            temp.push_back(vc[j++]);
        }
    }

    while (i <= mid) temp.push_back(vc[i++]);
    while (j <= end) temp.push_back(vc[j++]);

    for (int k = 0; k < temp.size(); k++) {
        vc[k + start] = temp[k];
    }
    for (int t : temp) {
        cout << t;
    }
}

void divide_array(vector<int> &vc, int start, int end) {
    cout << "call it with : " << start << ", " << end << endl;
    if (start < end) {
        int mid = (start + end) / 2;
        divide_array(vc, start, mid);
        cout << "2nd hulf" << endl;
        divide_array(vc, mid + 1, end);
        cout << "will call here with " << start << ", " << mid << ", " << end << endl;
        merge(vc, start, mid, end);
    }
}

int main() {
    vector<int> vc = {10, 20, 15, 12};
    int size = vc.size();
    cout << size << endl;
    divide_array(vc, 0, size - 1);

    cout << "sorted array" << endl;
    for (int i : vc) {
        cout << i << ", ";
    }
}