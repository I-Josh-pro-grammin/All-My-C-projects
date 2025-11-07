#include <iostream>
using namespace std;

/*
//Quick sort

// Function to partition the array
int partition(int A[], int low, int high ) {
   int pivot = A[high];
   int i = low - 1;

   for(int j = low; j<high ; j++) {
    if(A[j] < pivot){
        i++;
        swap(A[i], A[j]);
    }
   }

   swap(A[i+1], A[high]);
   return i+1;
 }

// Recursive Quick Sort function
void quicksort(int A[]; int low, int high) {
  if(low < high) {
    int  pivot_index = partition(A, low, high);
    quicksort(A, low, pivot_index - 1);
    quicksort(A, pivot_index + 1, high);
  }
}
int main() {
    int arr[] = {1, 3, 6, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

void merge(int A, int left, int right, int mid) {
  int n1 = mid -left +1;
  int n2 = right-mid;

  int L[n1], R[n2];

  for(int i = 0; i<n1; i++) {
    L[i] = A[left+i];
  }

  for(int i=0; i<n2; i++) {
    R[i] = A[mid+1+i];
  }

  int i=0; j=0; k=left;

  while(i<n1&& j <n2){
    if(L[i] < R[j]){
        A[k] = L[i];
        i++;
    }else{
        A[k] = R[j];
        j++;
    }

    k++;
  }

  while(){

  }
}

void mergeSort(int A[], int low, int high) {
  if(low < high){
    int mid;
    mid = (low + high)/2;
    mergeSort(A, low, mid);
    mergeSort(A, mid+1, high);
    merge(A, low, high, mid);
  }
}

int main() {
    int arr[] = {1, 3, 6, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
