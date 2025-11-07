#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    // Allocating memory for 5 integers and initializing to zero
    ptr = (int*)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Using the allocated memory
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);  // All values will be 0 initially
    }

    free(ptr); // Don't forget to free the allocated memory
    return 0;
}
