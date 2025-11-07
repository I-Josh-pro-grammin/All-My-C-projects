#include <stdio.h>

void selectionSort(int arr[], int size, ){
  int i, start, min_index, temp;

  for(start = 0; start< size - 1; start++){
    start = min_index;

    for(i = start+1; i<size; i++ ){
      if(arr[i] < arr[min_index]){
          min_index = i;
      }
     }
     temp = arr[start];
     arr[start] = arr[min_index];
     arr[min_index] = temp;
  }
}

int main() {

}
