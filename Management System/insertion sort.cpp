#include <bits/stdc++.h>

using namespace std;

int insertSort(vector<int>& a, int n) {
  for(int i=1; i<n; i++) {
    int key = a[i]; int j=i-1;
    while(j>=0 && a[j] > key) {
      a[j+1] = a[j--];
    }
    a[j+1] = key;
  }

  return 0;
}

int main() {
  vector<int> a={4,2,9,10,4};
  insertSort(a, a.size());

  for(int i=0; i<a.size(); i++) {
    cout << a[i]<< ",";
  }
  return 0;
}
