#include <iostream>
using namespace std;
void permute(string str, int start, int end) {
    // Base case: if start index reaches end, print the permutation
    if (start == end) {
        cout << str << endl;
        return;
    }
    // Swap each character with the start position
    for (int i = start; i <= end; i++) {
        swap(str[start], str[i]);        // Swap to fix one character
        permute(str, start + 1, end);    // Recurse for remaining characters
        swap(str[start], str[i]);        // Backtrack: restore original string
    }
}
int main() {
    string str = "ABC";
    permute(str, 0, str.size() - 1);
    return 0;
}
