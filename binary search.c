#include <stdio.h>

// To search for key in sorted arr using binary search
// Return index if found; otherwise return -1
int binarySearch(int arr[], int size, int key) {
int low = 0, high = size – 1, mid = (low + high)/2;
}

while ((low <= high) && (arr[mid] != key)) {
if (key < arr[mid])
high = mid - 1;
else
low = mid + 1;
mid = (low + high)/2;
}
if (low > high) return -1;
else return mid

int main() {

}
