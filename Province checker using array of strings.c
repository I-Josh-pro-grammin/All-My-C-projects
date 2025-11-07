#include <stdio.h>
#include <string.h>

int samestring(char *s1, char *s2);

void main() {
    char *provinces[5];  // Array of pointers to store provinces
    char TheProvince[15]; // Array to hold user input
    int province = 0;  // Province index
    int i;

    provinces[0] = "Northern province";
    provinces[1] = "Southern province";
    provinces[2] = "Kigali province";
    provinces[3] = "Western province";
    provinces[4] = "Eastern province";

    int times=1;
    while(times<5){
    printf("Please enter the Province: ");
    scanf("%16s", TheProvince);


    // while (province < 5 && (!samestring(TheProvince, provinces[province]))) {
    //     province++;
    // }


    if (province < 5)
        printf("%s is province %d.\n", TheProvince, province + 1);
    else
        printf("No province %s!\n", TheProvince);

    times++;
    }
}


int samestring(char *s1, char *s2) {
    int i;
    if (strlen(s1) != strlen(s2))
        return 0;

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i])
            return 0;
    }

    return 1;
}
