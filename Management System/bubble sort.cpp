#include <bits/stdc++.h>
#include <vector>

using namespace std;

int bubbleSort(vector<int>& a, int n) {
  for(int i = 0; i<n; i++) {
    for(int j=0; j<n; j++ ){
      if(a[i] < a[j]) {
        swap(a[i], a[j]);
      }
    }
  }

  return 0;
}

int main() {
  vector<int> arr={1,3,5,6,2,19,10,7};
  bubbleSort(arr, arr.size());

  for(int i=0; i<arr.size(); i++) {
    cout << arr[i];
  }
  return 0;
}

