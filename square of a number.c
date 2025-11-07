 #include <stdio.h>

int main (){
   int n;
  printf("enter any number:");
  scanf("%d", &n);
  printf("%d", square(n));
}
int square(int number){
  printf("youre square is %d", number);
  return number *=  number;
}
