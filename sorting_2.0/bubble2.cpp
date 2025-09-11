// implement a bubble sort
#include<bits/stdc++.h>
using namespace std;

class bubble_sort {
    int arr[100];
    int size;
    public:
        bubble_sort(int arr[], int size) {
            this->size = size;
            for (int i = 0; i < this->size; i++) {
                this->arr[i] = arr[i];
            }
        }

        void logic() {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < (size - i - 1); j++ ) {
                    if (arr[j] > arr[j + 1]) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }

        void display() {
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    int arr[] = {10, 15, 12, 16, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Display without sort" << endl;
    bubble_sort bs(arr, size);
    bs.display();
    cout << "Display after sort" << endl;
    bs.logic();
    bs.display();

    return 0;
}