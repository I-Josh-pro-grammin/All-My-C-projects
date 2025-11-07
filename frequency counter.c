#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  char ch[2];
  printf("Enter the word you want to search from:");
  fgets(str, sizeof(str), stdin);
  printf("\n");
  printf("Enter the character you want to show the frequencies for:");
  scanf("%s", &ch);
  int count = 0;
  for(int i = 1; i<strlen(str); i++){
    if(str[i] == ch[0]){
      count++;
          }
  }
  printf("%d\n", count);
}
