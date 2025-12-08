#include <bits/stdc++.h>

using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot=arr[high];
    int end=high;
    int i=low-1;

    for(int j=low; j<=end;j++ ) {
        if(arr[j]<pivot) {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    i++;

    swap(arr[end], arr[i]);
    return i;
}

void quickSort(vector<int>& arr, int low, int high) {
    if(high<=low) return;

    int pivotIndex = partition(arr, low, high);

    quickSort(arr, low, pivotIndex -1);
    quickSort(arr, pivotIndex + 1 , high);
}

int main() {
    vector<int> arr={1, 2, 5,6};
    quickSort(arr, 0, arr.size()-1);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
