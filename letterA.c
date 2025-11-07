#include <stdio.h>

int main(){
  int size;
  printf("enter the number of rows you require");
  scanf("%", size);
  for(int i=1; i<=size; i++){
    for (int j=1; j<=size*2-1; i++){
      if (j == size-i+1 || j==size+ i-1 || i==size/2 & j<size-i+1&j>size+i-1){
        printf("*");
      }else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;

}
