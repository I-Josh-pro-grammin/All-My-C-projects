#include <bits/stdc++.h>

using namespace std;

int selectionSort(vector<int>& a, int n) {
  for(int i=0; i<n; i++) {
    int minIndex = i;
    for(int j=i+1; j<n; j++) {
      if(a[j] < a[minIndex]) {
        minIndex = j;
      }

    }
      swap(a[i], a[minIndex]);

  }

  return 0;
}

int main() {
  vector<int> arr={1,3,5,6,2,19,10,7};
  selectionSort(arr, arr.size());

  for(int i=0; i<arr.size(); i++) {
    cout << arr[i]<< ",";
  }
  return 0;
}
