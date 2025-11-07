#include <iostream>

using namespace std;

struct S {
  int i;
  float f;
  double d;
  char c;
 };

 int main() {
   struct S s1;

     s1.i = 1;
     s1.f = 1.15;
     s1.d = 35.4305;
     s1.c = 'c';


   cout << s1.i << endl
   << s1.f << endl
   << s1.c << endl;

   cout << "The size of s1: " << sizeof(s1) << endl;
 }
