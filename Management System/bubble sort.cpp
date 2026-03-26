#include <bits/stdc++.h>

using namespace std;

void bubblesort(int arr[],int n) {
  for(int i=0; i<n-1; i++) {
    bool swapped = false;
    for(int j=0; j<n-i-1; j++) {
      if(arr[j] > arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;

        swapped = true;
      }

    }

    if(!swapped) {
        break;
      }
  }

  return;
}

void print(int arr[], int n) {
  for(int i=0; i<=n-1; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[] = {5, 1, 4, 2, 8};
  int n = sizeof(arr)/sizeof(arr[0]);

  cout << "Original array: ";
  print(arr, n);

  bubblesort(arr, n);

  cout << "Sorted array: ";
  print(arr, n);

}
