#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char fname[81];   // Array to hold the filename
    char buffer[101]; // Buffer to hold file content
    FILE *instream;   // File pointer


    printf("Enter the file name: ");
    scanf("%s", fname);  // Use fgets to allow spaces

    // Remove the trailing newline character that fgets may leave
   // fname[strcspn(fname, "\n")] = 0;

    if ((instream = fopen(fname, "r")) == NULL) {
        printf("Unable to open file %s\n", fname);
        exit(-1);
    }
    printf("\nContents of %s:\n", fname);


    while (fgets(buffer, sizeof(buffer), instream) != NULL) {
        fputs(buffer, stdout);
    }


    fclose(instream);
    return 0;
}
