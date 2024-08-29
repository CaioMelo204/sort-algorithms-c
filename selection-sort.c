//
// Created by caiog on 29/08/2024.
//
void selectionSort(int arr[], const int n) {
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        if (i != min) {
            const int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}