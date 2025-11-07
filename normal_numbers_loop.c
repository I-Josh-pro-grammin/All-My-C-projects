#include <stdio.h>

int main(){
   int i = 1;
   int n;
   printf("Enter any number to be the limit:");
   scanf("%d\n", &n);
   printf("The natural numbers from 1 to %d : \n", n);
   while(i < n){
    i++;
    printf("%d\n", i);
}
   return 0;
 }
