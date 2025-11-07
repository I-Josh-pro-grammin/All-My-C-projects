#include <stdio.h>

int main(){
  int n,c;
  long int f=1;
  printf("/n enter the number:");
  scanf("%d",&n);
  if (n<0)
    goto end;
  for (c=1; c<=n; c++)
    f*=c;
    printf("\n factorial is %ld", f);
  end:
  return 0;
}
