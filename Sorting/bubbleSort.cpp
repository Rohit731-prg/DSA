#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: " << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Just for better formatting
}

int main() {
    int arr[] = {15, 59, 57, 53, 55, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]); // Fixed

    bubbleSort(arr, size);

    return 0;
}
