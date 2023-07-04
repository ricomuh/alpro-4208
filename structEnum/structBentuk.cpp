#include <iostream>

using namespace std;

struct PersegiPanjang {
    int panjang;
    int lebar;
    int Luas() {
        return panjang * lebar;
    }
};

struct Lingkaran {
    int jariJari;
    double Luas() {
        return 3.14 * jariJari * jariJari;
    }
};

struct Kerucut {
    int jariJari;
    int tinggi;
    double Volume() {
        return 1/3 * 3.14 * jariJari * jariJari * tinggi;
    }
};

struct Bola {
    int jariJari;
    double Volume() {
        return 4/3 * 3.14 * jariJari * jariJari * jariJari;
    }
};

int main() {
    PersegiPanjang pp;
    pp.panjang = 10;
    pp.lebar = 5;
    cout << "Luas persegi panjang: " << pp.Luas() << endl;

    Lingkaran l;
    l.jariJari = 7;
    cout << "Luas lingkaran: " << l.Luas() << endl;

    Kerucut k;
    k.jariJari = 7;
    k.tinggi = 10;
    cout << "Volume kerucut: " << k.Volume() << endl;

    Bola b;
    b.jariJari = 7;
    cout << "Volume bola: " << b.Volume() << endl;

    return 0;
}