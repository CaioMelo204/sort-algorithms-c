#include <stdio.h>




void main() {
    int arr[10] = {12, 2, 33, 4, 51, 63, 37, 88, 96, 1};

    printf("Before sorting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("After sorting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}