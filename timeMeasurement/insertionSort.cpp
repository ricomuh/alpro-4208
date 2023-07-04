#include <iostream>
#include <chrono>

using namespace std;

void insertionSortRecursive(int arr[], int n) {
    if (n <= 1) return;

    insertionSortRecursive(arr, n - 1);

    // get the last element
    int last = arr[n - 1];
    // index of the second last element
    int j = n - 2;

    // while j is not out of bound and last element is smaller than the second last element
    while (j >= 0 && arr[j] > last) {
        // move the second last element to the last element
        arr[j + 1] = arr[j];
        // decrement j
        j--;
    }

    // set the value of the last element iterated to the value of the last element
    arr[j + 1] = last;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    auto start = chrono::steady_clock::now();

    insertionSortRecursive(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << endl << chrono::duration <double, milli> (diff).count() << " ms" << endl;

    return 0;
}