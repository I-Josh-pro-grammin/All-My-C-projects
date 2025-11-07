#include <stdio.h>

using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
  int n1 = mid - left+1;
  int n2 = right - mid;

  vector<int> R(n1), L(n2);

  for(int i=0; i<n1; i++) {
    L[i] = arr[left + 1];
  }

  for(int i=0; i<n2; i++) {
    R[i] = arr[mid + 1 + j];
  }

  int i = 0;
  int j = 0;
  int k = left;

  while(i <= n1 && j <= n2) {
     if(L[i] <= R[i]) arr[i] = L[i++];
     else arr[i] = R[i++];
  }


}

int main() {
  int
 }
