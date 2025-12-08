#include <stdio.h>

int main() {
  int number;
  int i; printf("Enter a number: ");
  scanf("%d", &number);
  printf("Multiplication table of %d:\n", number);
  for (i = 1; i <= 10; i++) {
    int m = i * number;
    printf("%d × %d = %d\n", number, i, m);
  }
  return 0;
}
