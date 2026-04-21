/*#include <bits/stdc++.h>

using namespace std;

int mergeParts(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1];
    int R[n2];

    // Copy data
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];

    for (int i = 0; i < n2; i++)
        R[i] = arr[m + 1 + i];

    // Print for debugging
    cout << "Left array: ";
    for (int x : L) cout << x << " ";
    cout << endl;

    cout << "Right array: ";
    for (int x : R) cout << x << " ";
    cout << endl;

    return 0;
}

int main() {
    int nums[] = {2, 3, 6, 10, 8, 5, 4};

    mergeParts(nums, 0, sizeof(nums)/2, sizeof(nums)-1);


    return 0;
}
*/

void merg(int arr[], int s, int mid, int e){
  int n1 = s+mid-1;
  int n2 = e-mid;

  int left[n1], right[n2];
  for(int i=0; i<n1; i++) {
    i=
  }
}

void mergeSort(int arr[], int s, int e) {
  if(s>=e) return;

  int mid = (s+e) /2;
  mergeSort(arr, s, mid);
  mergeSort(arr, mid+1, e);

  merg(arr, s, mid, e);
}


