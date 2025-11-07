#include <stdio.h>

 int isPrime(int num){
   if (num <= 1 ){
     return 0;
   }
   for (int i=2; i*i<=num; i++){
    if(num%i== 0){
    return 0;}
   }
   return 1;
 }

 int main (){
 int first, last;
  printf("please enter the lower limit:");
  scanf("%d", &first);
   printf("please enter the higher limit:");
  scanf("%d", &last);
  for(int i=first; i<last; i++){
     if(isPrime(i)){
        printf("%d", i);
     }
  }
  return 0;
}

