#include <stdio.h>
#include <stdlib.h>

int main() {

int m, n, p;
    printf("Enter the number of rows and columns for matrix A (m x n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns for matrix B (n x p): ");
    scanf("%d %d", &n, &p);

    if (n != p) {
        printf("Error: Matrix multiplication is not possible. The number of columns of matrix A must be equal to the number of rows of matrix B.\n");
        return 1;
    }


    int A[m][n], B[n][p], C[m][p];


    printf("Enter the elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }


    printf("Enter the elements of matrix B (%d x %d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("Resultant matrix C (product of A and B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

   /*
    printf("enter the number of rows and columns for the matrix A( m * n):");
    scanf("%d %d", &m, &n);

    printf("enter the number of rows and columns for the matrix B( n * p):");
    scanf("%d %d", &n, &p);

    if(p != n){
        printf("product is impossible. the columns of matrix A must be equal to the rows of matrix B.");
    }
    int A[m][n],B[n][p],C[m][p];

    printf("enter the columns for the matrix A:");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("enter the columns for the matrix B:");
    for(int i=0; i<n; i++){
        for(int j=0; j<p; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            for(int k=0; k<n; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    printf("Resultant matrix C (product of A and B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }*/

    return 0;
}
