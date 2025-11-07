#include <stdio.h>

void removeVowels(char *word);
int main(){
 char name[100] = "&name";
 printf("enter your name here:");
 scanf("%c", &name);
 printf("your name without vowels is %s\n", name);
return 0;
}
 void removeVowels(char *word){
 int length= strlen(word);
 char vowels[]="aieuoAEIOU";
 for(int i=0; i<length;i++ )
     for (int j = 0; j < strlen(vowels); j++) {
            if (word[i] == vowels[j])
                { memmove(&word[i], &word[i + 1], length - i); length--;}
     }

}
