//char lastName[11];
//char firstName[11];
//
//printf("Enter your name {last , first}: ");
//scanf("%10s%*[^,],%10s", lastName, firstName);
//printf("Nice to meet you %s %s\n", firstName, lastName);

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isStringPalindrome(char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    // Compare characters from both ends of the string
    while (start < end) {
        if (*(str + start) != *(str + end)) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }

    return 1;  // Palindrome
}

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

// Function to check if a number is a palindrome
int isNumberPalindrome(int num) {
    // Compare the number with its reverse
    if (num == reverseNumber(num)) {
        return 1;  // Palindrome
    }
    return 0;  // Not a palindrome
}

int main() {
    char str[100];
    int num;

    // Check palindrome for string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove trailing newline character if present

    if (isStringPalindrome(str)) {
        printf("The string \"%s\" is a palindrome.\n", str);
    } else {
        printf("The string \"%s\" is NOT a palindrome.\n", str);
    }

    // Check palindrome for number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isNumberPalindrome(num)) {
        printf("The number %d is a palindrome.\n", num);
    } else {
        printf("The number %d is NOT a palindrome.\n", num);
    }

    return 0;
}
