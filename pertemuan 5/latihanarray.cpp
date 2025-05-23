#include <iostream>
using namespace std;

int main(){
    // menghitung program penjumlahan matriks 2x2

    int matriks1[2][2]; // matriks pertama
    int matriks2[2][2]; // matriks kedua
    int hasil[2][2];    // matriks hasil penjumlahan

    cout << "matriks 1" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "masukkan elemen baris " << i + 1 << " : ";
            cin >> matriks1[i][j]; // untuk memasukkan inputan elemen matriks1
        }
    }

    cout << "matriks 2" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "masukkan elemen baris " << i + 1 << " : ";
            cin >> matriks2[i][j]; // untuk memasukkan inputan elemen matriks2
        }
    }

    cout << "hasil penjumlahan" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // membuat perhitungan penjumlahan elemen
            cout << hasil[i][j] << " "; // memberikan output hasil
        }
        cout << endl; 
    }
}
