#include <stdio.h>

int main (){
  int n;
  n;
  printf("enter the number to be the upper limit:");
  scanf("%d\n", &n);
  printf("your list of natural number from %d to 1:\n", n);
  while(n >= 1){
  printf("%d\n", n);
  n--;
  }
  return 0;
}
