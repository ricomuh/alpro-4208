#include <iostream>

using namespace std;

enum TypeSepeda {
    SepedaGunung,
    SepedaBalap,
    SepedaLipat
};

struct Sepeda {
    string 
        merk,
        harga;
    TypeSepeda type;
    int tahun;
};

string TypeSepedaToString(TypeSepeda type) {
    switch (type) {
        case SepedaGunung:
            return "Sepeda Gunung";
        case SepedaBalap:
            return "Sepeda Balap";
        case SepedaLipat:
            return "Sepeda Lipat";
        default:
            return "Unknown";
    }
}

int main() {
    Sepeda sepeda;
    sepeda.merk = "Polygon";
    sepeda.type = TypeSepeda::SepedaGunung;
    sepeda.harga = "Rp. 2.000.000";
    sepeda.tahun = 2013;

    cout << "Merk: " << sepeda.merk << endl;
    cout << "Type: " << TypeSepedaToString(sepeda.type) << endl;
    cout << "Harga: " << sepeda.harga << endl;
    cout << "Tahun: " << sepeda.tahun << endl;


    return 0;
}