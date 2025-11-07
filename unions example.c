#include <stdio.h>

union abc{
int a;
char b;
} var;
int main(){
var.a = 66;
printf("a=%d\n", var.a);
printf("b=%c\n", var.b);
printf("Size is: %ld\n", sizeof(union abc));
return 0;
}
