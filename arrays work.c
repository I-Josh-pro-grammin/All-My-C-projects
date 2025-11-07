#include <stdio.h>

int main(){
  int arr[4]= {3,0,2,4};
  int i;
  for(i=0; i<4; i++){
    printf("%d , %d\n", &arr[i], &i);
   }
   return 0;
}
