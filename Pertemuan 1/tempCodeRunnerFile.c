#include <iostream>

int main() {
    // Deklarasi variabel
    double angka1, angka2, hasil;

    // Meminta input dari pengguna
    std::cout << "Masukkan angka pertama: ";
    std::cin >> angka1;
    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;

    // Menjumlahkan angka
    hasil = angka1 + angka2;

    // Menampilkan hasil
    std::cout << "Hasil penjumlahan: " << hasil << std::endl;

    return 0;
}
