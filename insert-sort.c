//
// Created by caiog on 29/08/2024.
//
void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int next = i;
        while (next > 0 && arr[next - 1] > arr[next]) {
            int temp = arr[next - 1];
            arr[next - 1] = arr[next];
            arr[next] = temp;
            next--;
        }
    }
}