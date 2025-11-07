#include <stdio.h>

int main(){
  int n,sum,a ;
  sum= 0;
  a = 2;
  printf("enter any even number: ");
  scanf("%d\n", &n);
  printf("the sum of all numbers between 1 and %d\n", n);
  while(sum <= n){
    sum += a;
    a += 2;
  }
    printf("%d\n", sum);
}
