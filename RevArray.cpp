#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    if (start >= end) return; // base case

    // swap start and end elements
    swap(arr[start], arr[end]);

    // recursive call
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, 0, n - 1);

    // print reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
