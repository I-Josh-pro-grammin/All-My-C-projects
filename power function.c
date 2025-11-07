/*#include <stdio.h>

int pow (int n1, int n2) {
  for(int i = 1; i<=n2; i++){
    n1 = n1 * n1;
  }
  return n1;
}

int main(){
  int n1, n2;
  printf("Enter two numbers: \n");
  scanf("%d\n", &n1);
  scanf("%d\n", &n2);
  int result = pow(n1, n2);
  printf("%d power %d is %d", n1, n2, result);
  return 0;
}*/

#include <stdio.h>

int main(){
  int n, remainder, reversed;
  reversed=0;
  printf("Please enter a number:");
  scanf("%d", &n);

  while(n != 0) {
    remainder = n % 10;
    reversed = reversed * 10 + remainder;
    n /= 10;
  }
  printf("The reversed number is %d", reversed);
  return 0;
}
