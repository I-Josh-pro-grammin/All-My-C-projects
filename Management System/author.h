#ifndef AUTHOR_H
#define AUTHOR_H

typedef struct {
  int author_id;
  char name[100];
  char bio[500];
} Author;

void add_author(Author author);
void read_author();
void update_author(int author_id, Author new_author);
void delete_author(int author_id);

#endif
