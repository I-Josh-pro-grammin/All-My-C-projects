#include <stdio.h>

int sum(){
    int a , b, c;
  printf("enter your first number :");
  scanf("%d", &a);
    printf("enter your second number :");
  scanf("%d", &b);
    printf("enter your third number :");
  scanf("%d", &c);

  return a + b + c;
}

int main(){
   printf("your sum is %d", sum());
   return 0;
}
