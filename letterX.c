#include <stdio.h>

int main(){
  int size;
  printf("enter the number of rows you want for your star:");
  scanf("%d", &size);
  for(int i=1; i<=size; i++){
    for(int j=1; j<=size; j++){
      if (j==size-i+1||j==i ){
        printf("*");
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
}
