#include <bits/stdc++.h>

using namespace std;

int secondSmallestNumber(int arr[], int size){
    if(size < 2) {
        cout << "The graph is not big enough it has one element";
        return -1;
    }
  int firstMin = INT_MAX;
  int secondMin = INT_MAX;

  for(int i=0; i<size; i++ ) {
    if(firstMin > arr[i]) {
        secondMin = firstMin;
        firstMin = arr[i];
    }else if(arr[i] < secondMin && arr[i] != firstMin) {
      secondMin = arr[i];
    }
  }

  if(secondMin == INT_MAX) {
    cout << "There is no second smallest number";
    return -1;
  }

  return secondMin;
}

int main() {

  int arr[6] = {3, 5,1, 4, 9};

  int secondNum = secondSmallestNumber(arr, sizeof(arr)/sizeof(arr[0]));
  for(int i =0; i<(sizeof(arr) / sizeof(arr[0])); i++) {
    cout << i;
  }

  cout << "The second smallest number in the array is: " << secondNum;


  return 0;

}
