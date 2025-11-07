#include <stdio.h>

int factorial(int n){
  int fact = 1;
  for(int i=2; i<=n; i++){
    fact *= i;
  }
  return fact;
}

int combination(int n, int r){
  return factorial(n) / (factorial(r) * factorial(n-r));
}

void pascalTriangle(int rows){
  for(int i=0; i<=rows; i++){
    for(int spaces=0; spaces < rows-i-1; spaces++){
    printf("  ");
  }

  for(int j=0; j<=i; j++){
    printf("%4d", combination(i, j));
  }
  printf("\n");
  }
}

int main(){
  int rows;
  printf("Enter the number of rows\n");
  scanf("%d", &rows);
  pascalTriangle(rows);

  return 0;
}
