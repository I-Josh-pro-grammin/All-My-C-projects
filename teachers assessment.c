#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORD_LEN 100
#define MAX_UNIQUE_WORDS 1000

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordEntry;

void toLowerCase(char* str) {
    for (int i = 0; str[i]; i++)
        str[i] = tolower(str[i]);
}

int main() {
    const char* filename = "teachers assessment.c";
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("File opening failed");
        return 1;
    }

    WordEntry words[MAX_UNIQUE_WORDS];
    int totalWords = 0;
    int uniqueWordCount = 0;
    char buffer[1024];

    while (fscanf(file, "%1023s", buffer) == 1) {
        // Remove punctuation from end
        int len = strlen(buffer);
        while (len > 0 && ispunct(buffer[len - 1])) {
            buffer[len - 1] = '\0';
            len--;
        }

        toLowerCase(buffer);
        totalWords++;

        int found = 0;
        for (int i = 0; i < uniqueWordCount; i++) {
            if (strcmp(words[i].word, buffer) == 0) {
                words[i].count++;
                found = 1;
                break;
            }
        }

        if (!found && uniqueWordCount < MAX_UNIQUE_WORDS) {
            strcpy(words[uniqueWordCount].word, buffer);
            words[uniqueWordCount].count = 1;
            uniqueWordCount++;
        }
    }

    fclose(file);

    int repeatedWords = 0;
    for (int i = 0; i < uniqueWordCount; i++) {
        if (words[i].count > 1) {
            repeatedWords += words[i].count;
        }
    }

    double percentage = (repeatedWords / (double)totalWords) * 100.0;

    // Output in required format
    printf("Percentage of repeated words in \"%s\" : %.0f %%\n", filename, percentage);
    printf("Repeated words:\n");

    int index = 1;
    for (int i = 0; i < uniqueWordCount; i++) {
        if (words[i].count > 1) {
            printf("%d. %s => Frequency: %d times\n", index, words[i].word, words[i].count);
            index++;
        }
    }

    return 0;
}
