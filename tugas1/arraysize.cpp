#include <iostream>

using namespace std;

int arraySize(int arr[]) {
    return sizeof(arr) / sizeof(arr[0]);
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    cout << "Size of array a: " << arraySize(a) << endl;
    return 0;
}