/*#include <stdio.h>
#include<string.h>
void displayString(char passedstr[]);
int main(){
char str[50];
printf("Enter string: ");
fgets(str, sizeof str, stdin);
displayString(str);// Passing string to function
return 0;
}
void displayString(char passedstr[])
{
printf("The passed String was: ");
puts(passedstr);
}

#include <stdio.h>
#include<string.h>
void displayString(char passedstr[]);
int main(){
char str[50];
printf("Enter string: ");
fgets(str, sizeof str, stdin);
displayString(str);// Passing string to function
return 0;
}
void displayString(char passedstr[])
{
printf("The passed String was: ");
printf("%s", passedstr);
}

#include <stdio.h>

struct Car {
  char color[20];
  float price;
  int numberOfSits;
  int numberOfTyres;
}Benz, Fuso;

int main(){
  printf("Enter member elements for Benz:\n\n");
  printf(" color: ");
  fgets(Benz.color, sizeof(Benz.color), stdin);
  printf("\n\n price: ");
  scanf("%f", &Benz.price);
  printf("\n\n number of places: ");
  scanf("%d", &Benz.numberOfSits);
  printf("\n\n number of tyres: ");
  scanf("%d", &Benz.numberOfTyres);

  printf("_____________________________________________\n");


  printf("Enter member elements for Fuso:\n\n");
  printf(" color: ");
  scanf("%s", &Benz.color);
  printf("\n\n price: ");
  scanf("%f", &Fuso.price);
  printf("\n\n number of places: ");
  scanf("%d", &Fuso.numberOfSits);
  printf("\n\n number of tyres: ");
  scanf("%d", &Fuso.numberOfTyres);

  printf("_____________________________________________\n");

  printf("You entered the following values for Benz.\n\n");
  printf("Color: %s\n", Benz.color);
  printf("price: %f\n", Benz.price);
  printf("number of places: %d\n", Benz.numberOfSits);
  printf("number of tyres: %d\n", Benz.numberOfTyres);

  printf("_____________________________________________\n");

  printf("You entered the following values for Fuso.\n\n");
  printf("Color: %s\n", Fuso.color);
  printf("price: %f\n", Fuso.price);
  printf("number of places: %d\n", Fuso.numberOfSits);
  printf("number of tyres: %d\n", Fuso.numberOfTyres);


}


#include<stdio.h>
int factorial(int a){
int i,fact=1;
for(i=a;i>0;i--)
fact*=i; //5 marks
return fact;
}
int main(){
int n,i;
float sumSeries=0.0;
printf("\n Enter a number: ");
scanf("%d", &n);
for(i=1;i<=n;i++){
sumSeries+=1/factorial(i) ; //5 marks
printf("Sum of requested series %f ",sumSeries);
}
return 0;
}

//_____declaring and initializing pointers for different data types______________

#include <stdio.h>

struct en {
  int a;
  int b;
};

int main() {
  struct en new;

  printf("Enter value for a: ");
  scanf("%d", &new.a);

  printf("Enter value for b: ");
  scanf("%d", &new.b);

  printf("This is a: %d\n", new.a);
  printf("This is b: %d\n", new.b);

  return 0;
}


//Enums

//DaysOfWeek enum

#include <stdio.h>

enum DaysOfWeek {
  Sunday,
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday
};

int main(){
  enum DaysOfWeek today=Tuesday;
  printf("Today is %d", today);
}

#include <stdio.h>
#include <unistd.h> // For sleep() on Linux/Mac
// #include <windows.h> // Uncomment for Windows

enum TrafficLight {
  Red,
  Yellow,
  Green
};

int main(){
    for(int j = 0; j < 4; j++ ){

        enum TrafficLight selectedLight = Red;
        printf("The traffic light is Red\n");
        sleep(3); // Sleep for 3 seconds

        selectedLight = Yellow;
        printf("The traffic light is Yellow\n");
        sleep(2); // Sleep for 2 seconds

        selectedLight = Green;
        printf("The traffic light is Green\n\n");
        sleep(5); // Sleep for 5 seconds
    }
    return 0;
}

#include <stdio.h>

enum Months {
  January = 31,
  February = 28,
  March = 31,
  April = 30,
  May = 31,
  June = 30,
  July = 31,
  August = 30,
  September = 31,
  October = 30,
  November = 31,
  December = 30
};

int main(){
  enum Months DaysOfSelectedMonth = February;
  printf("The month April has %d days", DaysOfSelectedMonth);
}


//Pointers

//1,Demonstrate pointer arithmetic by incrementing a pointer to access the next
//element in an array.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element

    printf("Accessing array elements using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i+1, *ptr);
        ptr++; // Move to the next element
    }

    return 0;
}

//2. Write a Program to Use a Pointer to a Pointer to Access and Modify Values

#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Original value: %d\n", **ptr2);
    **ptr2 = 99; // Modify value using pointer to pointer
    printf("Modified value: %d\n", num);

    return 0;
}

//3. Input and Print Array Elements Using Pointers

#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("You entered: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
*/

// 5. Swap Two Integers Using Pointers

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;

    printf("Before Swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swap: x = %d, y = %d\n", x, y);

    return 0;
}


