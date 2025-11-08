// implimenting binary search in cpp

#include<iostream>
#include<vector>
using namespace std;

void binary_search(vector<int> data, int search) {
    int start = 0;
    int end = data.size();
    cout << end << endl;
    while (start <= end) {
        int mid = (start + end) / 2;
        
        if (data[mid] == search) {
            cout << "Element Present" << endl;
            return;
        } else if (data[mid] < search) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    cout << "Element is not here" << endl;
}

int main() {
    vector<int> data = {15, 16, 18, 25, 35};
    int search;
    cout << "Search Item : ";
    cin >> search;

    binary_search(data, search);
}