#include <iostream>


int sumofDigits(int n) {
   if(n==0) {
     return 0;
   }else {
     return (n%10) + sumofDigits(n/10);
   }
   }

int main() {
   std::cout << (1%10);
   return 0;
}
