#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int smallest = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[smallest]) {
                smallest = j;
            }
        }

        swap(arr[i], arr[smallest]);
    }

    cout << "Sorted array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {15, 59, 57, 53, 55, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, size);
    return 0;
}