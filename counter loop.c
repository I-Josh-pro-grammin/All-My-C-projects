#include <stdio.h>

int main(){
  int x = 1;
  int count=0;  do{
    printf("please enter any number: ");
    scanf("%d", &x);
    if(x>0){
      count += 1;
    }
    }while(x>0);
    printf("your counter is : %d", count);

  return 0;
}
