#include <stdio.h>

int main(){
 int n;
 scanf("%d", &n);
 for(int i=0; i<=n; i++){
 int s=n;
 while(s>0){
    printf(" ");
    s--;
 }
 s--;
 for(int j=0; j<n; j++){
    printf("*");
 }
 n--;
 printf("\n");
 }
}
