#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Enter the first number: ";
  cin >> a << endl;

  cout << "Enter the second number: ";
  cin >> a << endl;

  int *p1, *p2;
  p1 = &a;
  p2 = &b;

  cout << "Your numbers were " << a << " and " << b << endl;
}
