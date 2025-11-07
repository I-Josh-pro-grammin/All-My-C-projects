#include <iostream>
#include <array>
using namespace std;

void printArray(int sizeofArr, int *arrPtr) {
  for(int i=0; i< sizeofArr; i++) {
    cout << *(arrPtr + i) << endl;
  }
}

void swap(int *ptr1, int *ptr2) {
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;

 }

struct Point {
  int x;
  int y;
};

struct Student {
  string name;
  array<int, 5> grades;
};

void printWinners(int sizeofArr, Student arr[]) {
  cout << "The students with an average above 90 are: " << endl;
  for(int i=0; i<sizeofArr; i++) {
       int gradesum = 0;
       for(int j=0; j<arr[i].grades.size(); j++) {
         gradesum += arr[i].grades[j];
       }
       int gradeAverage = gradesum/arr[i].grades.size();
       if(gradeAverage >= 90){
        cout << arr[i].name << endl;
       }
  }
}

int* createDynamicArray(int size) {
  int *arr;
  arr = new int[size];

  return arr;
}

struct Product {
  int id;
  double price;
};

int main() {
    /*
  int a, b;

  cout << "Enter the first number: ";
  cin >> a;
  cout << "Enter the second number: ";
  cin >> b;

  int *p1, *p2;
  p1 = &a;
  p2 = &b;

  cout << "Your numbers were: " << *p1 << " and " << *p2 << endl;
  */

  /*
  int arr[] = {1, 2, 3};
  int *arrPtr = arr;

  printArray(3, arrPtr);

  */

  /*
  int i = 3, j = 4;

  int *ptr_i, *ptr_j;
  ptr_i = &i;
  ptr_j = &j;

  cout << "The value of the i before swap: " << *ptr_i << endl;
  cout << "The value of j before swap: " << *ptr_j << endl;

  swap(ptr_i, ptr_j);

  cout << "The new value of i: " << *ptr_i << endl;
  cout << "The new value of j: " << *ptr_j << endl;
  */

  /*
  Point point;
  Point *pointPtr = NULL;
  pointPtr = &point;

  pointPtr -> x = 2;
  pointPtr -> y = 4;

  cout << "The point values (x, y) are: " << "(" << pointPtr -> x << ", " << pointPtr -> y << ")" << endl;
  */

  /*
    Student student1 = {"Joshua", {100, 95, 92, 94, 98}};
    Student student2 = {"Alice", {80, 75, 85, 90, 88}};
    Student student3 = {"Bob", {91, 93, 89, 95, 92}};

    Student arr[3] = {student1, student2, student3};

    printWinners(3, arr);
    */

    /*
    int arrSize;

    cout << "Enter the value you want for size of your array: ";
    cin >> arrSize;

    int *arrPtr = createDynamicArray(arrSize);

    cout << "Enter the values for the array " << endl;
    for(int i=0; i<arrSize; i++) {
        cin >> arrPtr[i];
    }

    cout << "The value of the array members: " << endl;
    for(int i=0; i<arrSize; i++) {
        cout << arrPtr[i] << endl;
    }

    */
    Product p1{1, 100};
    Product p2{2, 500};

    Product arr[] = {p1, p2};

    Product *pntrArr[];
    int sizeofArr = arr.length;

    for(int i=0; i<sizeofArr; i++) {
            *pntrArr[i] = &arr[i];
    }

    for(int i=0; i<sizeofArr; i++) {
        cout << "The id of first product: " << pntrArr[i].id << endl;
        cout << "The price of the first product is: " << pntrArr[i].price << endl;
    }
  return 0;
}
