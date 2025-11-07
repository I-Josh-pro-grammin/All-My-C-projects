#include <iostream>
using namespace std;

int main() {
int age;
string fullName;
cin >> age;
cin.ignore();
getline(cin, fullName);
cout << fullName << " is " << age << "years old.\n";
}
