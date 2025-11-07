#include <stdio.h>

int main(){
  int size = 9;
  for (int i=1; i<=size; i++){
    for (int j=1; j<= 5; j++){
     if (i<=5&&j==i||i>=5&&j==size-i+1||j<i&&i<=5||j<size-i+1&&i>=5){
      printf("*");
     }else{
      printf(" ");
     }
    }
    printf("\n");
  }
}
