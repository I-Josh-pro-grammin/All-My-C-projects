#include <stdio.h>

int main (){
     int n;
     printf("enter any number");
     scanf("%d", &n);
  printf("%d", isEven(n));
}

int isEven(number){
   scanf("%d", &number);
   if (number % 2 == 0){
     printf("your number was even\n");
   }else {
   printf("your number was odd\n");}
}
