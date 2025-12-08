#include <bits/stdc++.h>

using namespace std;

void sortArr(int Arr[], int last) {
  for(int i=0; i<=last; i++) {
    if(Arr[i] > Arr[i++]){
      swap(Arr[i], Arr[i++]);
    }
  }
}

int findBiggest(int num) {
  int A[10];
  int i = 10;
  int mod = 1; int j = 0; int last;

  while(mod >= 1) {
  mod = num /1;
  i=i*10;
  j++;
  }

  last = j;

  while(j>=0) {
    A[j] = num/mod;
    mod /= 10;
    j--;
  }

  sortArr(A, last);
  return A[last];
}

int main() {
  int num = 52790;
  int biggest=findBiggest(num);
  cout<<"The biggest number is: " << biggest << endl;
  return 0;
}
