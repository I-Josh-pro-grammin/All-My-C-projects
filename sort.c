#include <stdio.h>
#include <math.h>

int main(){
  int arr[]={43,52,39,27,19,42,41,33,40,22};
  int sorted[10]=sort(arr);
  printf("the minimum is: %d", sorted[0]);
}