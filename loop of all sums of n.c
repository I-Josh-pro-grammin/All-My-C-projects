#include <stdio.h>

int main(){
  int n ,a ,b;
  a = 0;
  b = 1;
  printf("enter any number:");
  scanf("%d\n", &n);
  printf("the sum of numbers from 1 to %d:\n", n);
  while (a <= n){
  a += b;
  b++;
  }
  printf("%d\n", a);
  return 0;
}
