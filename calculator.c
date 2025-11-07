#include <stdio.h>

int calculator(){
int sum, division, product, difference;
printf("if you want addition  write sum\n");

printf("if you want addition  write difference\n");

printf("if you want addition  write sum\n");

printf("if you want addition  write sum\n");

printf("enter the numbers you want to operate on\n");

int a, b;

scanf("%d\n", &a);
scanf("%d\n", &b);

if (calculator(sum)){
sum = a + b;
}else if (calculator(product)){
product = a * b;
}else if (calculator(division)){
division = a / b;
}else if (calculator(difference)){
difference = a - b;
}
return calculator();
}

int main(){
printf("your answer is", calculator());
return 0;
}
