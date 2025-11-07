#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int i, limit, temp;

    for (limit = size - 1; limit >= 0; limit--) {
        for (i = 0; i < limit; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {3, 5, 6, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    printf("The sorted array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
