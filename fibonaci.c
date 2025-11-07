// #include <stdio.h>

// int main(){
//   int first=1,second=2,sum=0;
//   for(int i=1; sum<=10; i++){
//     sum=second+first;
//     printf("%d", sum);
//     first=second;
//     second=sum;
//   }
//   return 0;
// }

//fibonaci series in arrays

#include <stdio.h>
int main() {
  int n, i;
  int fib[100]; // array to store Fibonacci numbers
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  fib[0] = 0;
  fib[1] = 1;
  printf("Fibonacci Series: %d, %d, ", fib[0], fib[1]);
  for (i = 2; i <= n; ++i) {
    fib[i] = fib[i - 1] + fib[i - 2];
    // if (fib[i] > n) {
    //   break;
    // }
    printf("%d, ", fib[i]);
  }
  return 0;
}
