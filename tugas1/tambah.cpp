#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Hasil: " << tambah(a, b) << endl;
    return 0;
}