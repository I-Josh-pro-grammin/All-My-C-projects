#include <stdio.h>
#include <string.h>

#define MAX_PLAYER 10

int search_teamate(char names[][20], int ages[], char genders[], int player_count, const char *player_name) {
    for (int i = 0; i < player_count; i++) {
        for (int j = 0; j < player_count; j++) {
            if (i != j && (ages[i] == ages[j]) && (genders[i] != genders[j])) {
                if (strcmp(names[i], player_name) == 0 || strcmp(names[j], player_name) == 0) {
                    // Return the index of the teammate (other one)
                    return (strcmp(names[i], player_name) == 0) ? j : i;
                }
            }
        }
    }
    return -1; // No teammate found
}

int main() {
    char names[MAX_PLAYER][20] = {
        "Alice", "Bob", "Charlie", "Diana", "Evan",
        "Fiona", "George", "Hana", "Ian", "Jane"
    };
    int ages[MAX_PLAYER] = {20, 21, 20, 21, 22, 22, 23, 23, 24, 24};
    char genders[MAX_PLAYER] = {'F', 'M', 'M', 'F', 'M', 'F', 'M', 'F', 'M', 'F'};

    const char *player_name = "Alice";
    int teammate_index = search_teamate(names, ages, genders, MAX_PLAYER, player_name);

    if (teammate_index != -1) {
        printf("The teammate of %s is %s\n", player_name, names[teammate_index]);
    } else {
        printf("No teammate found for %s\n", player_name);
    }

    return 0;
}
