#include <stdio.h>
#include <string.h>
#include "author.h"

void add_author(Author author){
  FILE *file = fopen("author.dat", "ab");
  if(!file){
    printf("Error while opening file\n");
    return;
  }
  fwrite(&author, sizeof(Author), 1, file);
  fclose(file);
  printf("Author Added successfully");
}

void read_authors(){
  FILE *file = fopen("author.dat", "rb");
  if(!file) {
    printf("Error while opening file\n");
    return;
  }

  Author author;
  while(fread(&author, sizeof(Author), 1, file)) {
    printf("ID: %d, Name: %s, Bio: %s\n", author.author_id, author.name, author.bio);
  }
  fclose(file);
}

void update_author(int author_id, Author new_author) {
    FILE *file = fopen("authors.dat", "r+b");
    if (!file) {
        printf("Error opening authors file\n");
        return;
    }
    Author author;
    while (fread(&author, sizeof(Author), 1, file)) {
        if (author.author_id == author_id) {
            fseek(file, -sizeof(Author), SEEK_CUR);
            fwrite(&new_author, sizeof(Author), 1, file);
            fclose(file);
            printf("Author updated successfully!\n");
            return;
        }
    }
    fclose(file);
    printf("Author ID %d not found\n", author_id);
}

void delete_author(int author_id) {
    FILE *file = fopen("authors.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (!file || !temp) {
        printf("Error opening files\n");
        if (file) fclose(file);
        if (temp) fclose(temp);
        return;
    }
    Author author;
    int found = 0;
    while (fread(&author, sizeof(Author), 1, file)) {
        if (author.author_id != author_id) {
            fwrite(&author, sizeof(Author), 1, temp);
        } else {
            found = 1;
        }
    }
    fclose(file);
    fclose(temp);
    remove("authors.dat");
    rename("temp.dat", "authors.dat");
    printf(found ? "Author deleted successfully!\n" : "Author ID %d not found\n", author_id);
}

