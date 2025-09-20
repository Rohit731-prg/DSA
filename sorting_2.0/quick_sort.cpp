// quick sort implemention

#include<bits/stdc++.h>
using namespace std;

int pertition(vector<int> &vc, int start, int end) {
    
}

void quick_sort(vector<int> &vc, int start, int end) {
    if (start < end) {

    }
}

int main() {
    vector<int> vc = {15, 12, 45, 78, 65};
    int size = vc.size();

    quick_sort(vc, 0, size);
    cout << "Sorted List : " << endl;
    for (int i: vc) {
        cout << i << ", ";
    }

    return 1;
}