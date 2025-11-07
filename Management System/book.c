#include <stdio.h>
#include <string.h>
#include <book.h>
#include <author.h>
#include <publisher.h>

int exists_author(int author_id) {
  FILE *file = fopen("auth.dat", "rb");
  if(!file) return 0;
  Author author;
  while(fread(&author, sizeof(Author), 1, file)){
    if(author.author_id == author_id){
      fclose(file);
      return 1;
    }
  }
  fclose(file);
  return 0;
}

int exists_publisher(int publisher_id) {
  FILE * file = fopen("publisher.dat", "rb");
  Publisher publisher;
  while(fread(&publisher, sizeof(Publisher), 1, file)){
    if(publisher.publisher_id == publisher_id){
      fclose(file);
      return 1;
    }
  }
  fclose(file);
  return 0;
}

void add_book(Book book) {
  if(!exists_author(book.author_id)){
    printf("Error: Author ID %d does not exist\n", book.author_id);
    return;
  }
  if(!exists_publisher(book.publisher_id)){
    printf("Error: Publisher ID %d does not exist\n", book.publisher_id);
    return;
  }
  FILE *file = fopen("book.dat", "ab");
  if(!file){
    printf("Error opening books file\n");
    return;
  }
  fwrite(&book, sizeof(Book), 1, file);
  fclose(file);
  printf("Book added successfully!\n");
}

void read_books() {
  FILE *file = fopen("book.dat", "rb" );
  if(!file){
    printf("Error opening books file\n");
    return;
  }
  Book book
  while(fread(&book, sizeof(Book), 1, file)){
    printf("ID: %d, Title: %s, Author ID: %d, Publisher ID: %d, ISBN: %s, Genre: %s, Year: %d, Copies: %d, Shelf: %s\n", book.book_id, book.title, book.author_id, book.publisher_id, book.isbn, book.genre, book.year_published, book.copies, book.shelf_location);
  }
}

void update_book(int book_id, Book new_book) {
  if(!exists_author(book_id) || !exists_publisher(new_book.publisher_id)){
    printf("Error: Invalid Author ID or Publisher ID\n");
    return;
  }
    FILE *file = fopen("book.dat", "r+b" );
  if(!file){
    printf("Error opening books file\n");
    return;
  }

  Book book;
  while(fread(&book, sizeof(Book), 1, file)){
    if(book.book_id == book_id){
      fseek(file, -sizeof(Book), SEEK_CUR);
      fwrite(&new_book, sizeof(Book), 1, file);
      fclose(file);
      printf("Book updated successfully\n");
      return;
    }
  }
  fclose(file);
  printf("Book not found\n");
  return;
}

void delete_book(int book_id){
  FILE *file = fopen("book.dat", "rb");
  FILE *temp = fopen("temp.dat", "wb");

  if(!file || !temp){
    printf("Error opening file\n");
    if (file) fclose(file);
    if (temp) fclose(temp);
    return;
  }

  Book book;
  int found = 0;
  while(fread(&book, sizeof(Book), 1, file)){
    if(book.book_id != book_id){
      fwrite(&book, sizeof(Book), 1, temp);
    }else {
      found = 1;
    }
  }
  fclose(file);
  fclose(temp);
  remove("book.dat");
  rename("temp.dat", "book.dat");
  printf(found ? "Book deleted successfully!\n" : "Book ID %d not found\n", book_id);
}
