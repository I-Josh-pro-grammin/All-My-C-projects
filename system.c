#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[6];
    printf("Clearing screen...\n");
    fgets(input, sizeof(input)-1, stdin);
    if(strcmp(input,"clear")==0){
    system("cls"); // Windows: Clears the screen
    // system("clear"); // Linux/macOS: Clears the screen
    }
    return 0;
}
