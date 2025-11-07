#include <stdio.h>

int main(){
  int x=3;
  int *pnt=&x;
  int *pnt2=*pnt;
  printf("%d", pnt2);
  *pnt2++;
  printf("\n%d", *pnt2);
  return 0;
}

