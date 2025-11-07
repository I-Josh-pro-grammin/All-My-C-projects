#include <stdio.h>
#include "add.h"

int main(){
  int n1,n2;
  printf("Enter two numbers: \n");
  scanf("%d", &n1);
  scanf("%d", &n2);
  printf("%d + %d = %d\n", n1, n2, add(n1,n2));
  printf("%d - %d = %d", n1, n2, sub(n1,n2));
  return 0;
}
