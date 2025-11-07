//triangle of stars and takes negative numbers to
#include <stdio.h>

int main(){
  int n, s;
  scanf("%d", &n);
  if (n>=0){
   for(int i=0; i<=n; i++){
       for(int j=0; j<=i; j++){
        printf("*");
       }
       printf("\n");
  }}else if(n<0){for(int i=0; i>=n; i--){
       for(int j=0; j>i; j--){
        printf("*");
       }
       printf("\n");

  }}
}


