#include <stdio.h>

int main(){
  for (int i=1; i<=10; i++ ){
    for(int j=1; j<=5; j++){
       if (i<=5&&j<=i||i>=5&&j<=10-i+1){
         printf("*");
       }else{
         printf(" ");
       }
    }
    printf("\n");
  }
}
