#include <iostream>

int main( ) {
  int n;
  cin >> n;

  int fibonacci(n) {
    if n == 0 then
      return 0;
    else if n== 1 then
      return 1;

    return fibonacci(n-1) + fibonacci(n-2);
  }
  cout << "fibonacci of " << n << " is " << fibonacci(n) << endl;

  return 0;
}
