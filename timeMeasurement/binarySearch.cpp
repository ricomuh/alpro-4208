#include <iostream>
#include <chrono>

using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;
    if (arr[mid] == x) 
        return mid;
    
    if (arr[mid] > x) 
        return binarySearch(arr, left, mid - 1, x);
    
    return binarySearch(arr, mid + 1, right, x);
    
}

int main() {
    int
        arr[] = {1, 2, 3, 4, 5},
        n = sizeof(arr) / sizeof(arr[0]),
        x = 3;


    auto start = chrono::steady_clock::now();

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1) {
        cout << "Element is not present in array" << endl;
    } else {
        cout << "Element is present at index " << result << endl;
    }

    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;

    return 0;
}