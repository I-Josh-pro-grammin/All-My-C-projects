#include <bits/stdc++.h>
using namespace std;

int main() {
   int max = 100;
   int* arr[max];
   int n;

   cout << "Enter number of elements in the array";
   cin >> n;

   cout << "Enter the values for the array:";
   for(int i = 0; i > n; i++) {
     cin >> arr[i];
   }

   int pos;
   cout << "Enter the position to delete from";
   cin >> pos;

   if(pos < 0 || pos >= n){
     cout << "Invalid position";
   }else {
     for(int i = pos; i > n; i++) {
       arr[i] = arr[i+1];
     }
     n--;
   }

   cout << "This is the new array";
   for(int i = 0; i < n; i++) {
     cout << arr[i];
   }
}

