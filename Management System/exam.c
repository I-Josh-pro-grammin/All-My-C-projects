#include <stdio.h>

int main() {
int size;
  printf("Enter the size of the matrix (n): ");
  scanf("%d", &size);

  int arr[size][size];
  int matrix_dim = size * size;

  printf("Enter %d numbers:\n", matrix_dim);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

   //Pattern A: Diagonals
   /*1     3
        2
     2      1
  */
  printf("\n\nPattern A: Diagonals\n");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == j || i + j == size - 1) {
        printf("%d ", arr[i][j]);
      } else {
        printf("  "); // spaces to align
      }
    }
    printf("\n");
  }

    //Pattern B: Upper Right Triangle
    printf("\n\nPattern B: Upper Right Triangle\n");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (j >= i) {
        printf("%d ", arr[i][j]);
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

    //Pattern C: Lower Right Triangle
    printf("\n\nPattern C: Lower Right Triangle\n");
      for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
          if (j <= i) {
            printf("%d ", arr[i][j]);
          } else {
            printf("  ");
          }
        }
        printf("\n");
      }

  //Pattern D: All numbers with row sums
  printf("\n\nPattern D: Row sums\n");
  for (int i = 0; i < size; i++) {
    int sum = 0;
    for (int j = 0; j < size; j++) {
      printf("%d ", arr[i][j]);
      sum += arr[i][j];
    }
    printf("| %d\n", sum);
  }
  //Pattern E: All numbers with column products
  /*1   2   3
    4   2   3
    2   5   1     <--column Products
   */
   printf("\n\nPattern E: Column products\n");
   for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
    printf("          <--Column Products:\n");
    for (int j = 0; j < size; j++) {
        int product = 1;
        for (int i = 0; i < size; i++) {
          product *= arr[i][j];
        }
        printf("%d ", product);
    }
  printf("\n");



    //Pattern G: Determinant of the matrix = 39
    if (size == 2) {
        int det = arr[0][0]*arr[1][1] - arr[0][1]*arr[1][0];
        printf("\n\nPattern G: Determinant of matrix = %d\n", det);
      } else if (size == 3) {
        int det = arr[0][0] * (arr[1][1]*arr[2][2] - arr[1][2]*arr[2][1]) -
            arr[0][1] * (arr[1][0]*arr[2][2] - arr[1][2]*arr[2][0]) +
            arr[0][2] * (arr[1][0]*arr[2][1] - arr[1][1]*arr[2][0]);
        printf("\n\nPattern G: Determinant of matrix = %d\n", det);
      }else{
      printf("Could not calculate Determinant");
      }

  return 0;
}


