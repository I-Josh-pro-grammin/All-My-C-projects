#include <stdio.h>
#include <stdlib.h>

void merge(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int k, d;
    printf("How many elements do you want for the first array?: ");
    scanf("%d", &k);
    printf("How many elements do you want for the second array?: ");
    scanf("%d", &d);

    int arr1[k], arr2[d];

    printf("Enter the elements for the first array:\n");
    for (int i = 0; i < k; i++) {
        scanf("%d", &arr1[i]);
    }


    printf("Enter the elements for the second array:\n");
    for (int i = 0; i < d; i++) {
        scanf("%d", &arr2[i]);
    }
    int merged[k + d];

    merge(arr1, k, arr2, d, merged);

    printf("Your merged array is:\n");
    for (int i = 0; i < k + d; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
