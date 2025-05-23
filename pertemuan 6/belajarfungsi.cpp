#include <iostream>
using namespace std;

// untuk menyapa pengguna
void sapa(string nama) {
    cout << "halo " << nama << "! selamat datang di AP 2" << endl;
}

int main() {
    string namapengguna = "Arya"; // nyimpen nama pengguna

    sapa(namapengguna); // panggil fungsi sapa, kirim nama pengguna

    return 0; // program selesai
}
