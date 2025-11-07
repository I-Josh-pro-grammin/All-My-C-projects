#include <stdio.h>
#include <stdlib.h>  // Needed for exit()
int main() {
    char line[100]= "hey you there \n";
    FILE *scores_in = fopen("D:\LECTURES\MY CODES\RESUME\.dist\my-work-resume", "w");
    if (scores_in == NULL) {
        printf("Unable to read file\n");
        exit(1);
    }else{
        fputs(line, scores_in);
        printf("successfully read the file");
    }
    fclose(scores_in);
    return 0;
}
