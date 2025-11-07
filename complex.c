#include <stdio.h>

int main(){
  struct complex{
    float real;
    float imaginary;
  } first, second, sum;

  scanf("%f %f", &first.real, &first.imaginary);
  scanf("%f %f", &second.real, &second.imaginary);

  sum.real = first.real + second.real;
  sum.imaginary = first.imaginary + second.imaginary;

  printf("\n %f + %fj", sum.real, sum.imaginary);

  return 0;
}
