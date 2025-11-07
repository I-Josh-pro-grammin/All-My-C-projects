#include <stdio.h>

int search(int arr[], int size, int key){

  int i;

  for(i = 0; i < size; i++ ){
    if(arr[i] == key){
      return i;
    }
  }
      return -1;
}

int main(){
  int arr[6] = {2, 4 ,3, 6, 9};
  int index = search(arr, 6, 6 );

  printf("%d", index );
}
