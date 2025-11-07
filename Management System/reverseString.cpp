#include <iostream>
using namespace std;

string reverseString(string name, int i){
	if (i <0)  return "" ;
	string reversedString = name[i]+ reverseString(name, i-1);

	if(reversedString == name) {
        return "The string is a palindrome";
	}else{
	return "String ain't not a palindrome";
	}
}


int main(){
	string name = "mom";
	int i = name.length()-1;

	cout<<reverseString(name, i);

	return 0;
}
