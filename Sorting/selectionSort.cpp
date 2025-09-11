#include<iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int current = arr[i];
        int pre = i - 1;

        while (pre >= 0 && arr[pre] > current) {
            arr[pre + 1] = arr[pre];
            pre--;
        }

        arr[pre + 1] = current;
    }

    cout << "Sorted array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {15, 59, 57, 53, 55, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr,size);

    return 0;
}