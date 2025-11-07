#include <stdio.h>
/*
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

// Function to check if two strings are anagrams
int areAnagrams(char str1[], char str2[]) {
    // If lengths of the strings are not equal, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Create frequency arrays for both strings
    int freq1[ALPHABET_SIZE] = {0};
    int freq2[ALPHABET_SIZE] = {0};

    // Traverse both strings and update the frequency counts
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[tolower(str1[i]) - 'a']++;  // Increment count for str1
        freq2[tolower(str2[i]) - 'a']++;  // Increment count for str2
    }

    // Compare the frequency arrays
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (freq1[i] != freq2[i]) {
            return 0;  // If counts don't match, they are not anagrams
        }
    }

    return 1;  // Strings are anagrams
}

int main() {
    char str1[100], str2[100];

    // Input the two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline from input

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline from input

    // Check if the strings are anagrams
    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}*/
  char isAnagram(char arr1[], char arr2[]){
   printf("Enter the first string: ");
   scanf("%s", arr1);
   printf("Enter the second string: ");
   scanf("%s", arr2);
    if(strlen(arr1)!= strlen(arr2)){
        printf("These strings are not anagrams.");
    }
    for( int i=0; i<strlen(arr1); i++){
            int j=0;
        while(i<strlen(arr2)){
          if(arr1[i]=arr2[j]){
            printf("%s", arr1[i]);
        }
        }
    }
    if(arr1=arr2){}
  }
 int main(){
     char str1[]={}, str2[]={};
     char str1[90], str2[10];
   isAnagram(arr1, arr2);
 }
