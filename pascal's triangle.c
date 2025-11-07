#include <stdio.h>

int main(){
 int rows;
 printf("enter any number you want to be the number of rows:");
 scanf("%d", &rows);
 for (int i=1; i<=rows; i++){
   for(int j=1; j<rows*3; j++){
     if (j == rows - i + 1 || j == rows + i - 1 || j>rows-i+1 & j<rows+i-1){
       printf("*");
     }else {
       printf(" ");
     }
   }
   printf("\n");
 }
 return 0;
}
