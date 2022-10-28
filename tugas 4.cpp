#include <iostream>
using namespace std;

int main () {
     char nomenuMakanan;
    int harga;

    cout << "            DAFTAR MENU Mc'Yahud        " << endl;
    cout << "========================================" << endl;
    cout << "1. Nasi Goreng Informatika   Rp. 5.000,-" << endl;
    cout << "2. Nasi Soto Ayam Internet   Rp. 7.000,-" << endl;
    cout << "3. Gado-gado Disket          Rp. 4.500,-" << endl;
    cout << "4. Bubur Ayam LAN            Rp. 4.000,-" << endl;
    cout << "========================================" << endl;

    cout << "Masukan Pilihan anda = ";
    cin >> nomenuMakanan;

    switch (nomenuMakanan) {
    case '1':
        cout << "Pilihan no.1 Nasi Goreng Informatika Rp. 5.000";
        harga = 5.000;
        break;

    case '2':
        cout << "Pilihan no.2 Nasi Soto Ayam Internet Rp. 7.000";
        harga = 7.000;
        break;

    case '3':
        cout << "Pilihan no.3 Gado-gado Disket Rp. 4.500";
        harga = 4.500;
        break;

    case '4':
        cout << "Pilihan no.4 Bubur Ayam LAN Rp. 4.000";
        harga = 4.000;
        break;

    }
}











