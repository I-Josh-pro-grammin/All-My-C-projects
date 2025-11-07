#include <stdio.h>

int main(){
  struct structure {
                float real;
                float complex
  } first, second, sum;
  printf("  Please provide your first complex number(n + b{i is the automatically}):");
  scanf("%f + %f", &first.real, &first.complex);
  printf("  Please provide your second complex number(n + b{i is the automatically}):");
  scanf("%f + %f", &second.real, &second.complex);

  sum.real = first.real + second.real;
  sum.complex = first.complex + second.complex;

  printf("The sum of your two complex numbers is :%f + %fi", sum.real, sum.complex);

}
