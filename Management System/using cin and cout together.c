#include <iostream>
#include <string>

using namespace std;

int main() {
int age;
string fullName;
cin >> age;
cin.ignore();
getLine(cin, fullName);
cout << fullName << " is " << age << "years old.\n";
}
