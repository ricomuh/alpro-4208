#include <iostream>

using namespace std;

void swapN(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSortDESC(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int largest = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[largest])
                largest = j;
        }
        swapN(arr[i], arr[largest]);
    }
}

void bubbleSortDESC(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swapN(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {
    int
        arr1[] = {2, 3, 4, 5, 6, 7, 8},
        arr2[] = {2, 3, 4, 5, 6, 7, 8},
        n = sizeof(arr1) / sizeof(arr1[0]);

    selectionSortDESC(arr1, n);
    bubbleSortDESC(arr2, n);

    cout << "Selection sort: ";
    printArray(arr1, n);
    cout << "\nBubble sort: ";
    printArray(arr2, n);

    return 0;
}