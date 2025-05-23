#include <iostream>
using namespace std; //agar program dapat berjalan langsung tanpa perlu mengkualifikasinya dengan std::

int main() {
    string kalimat; // variabel teks
    int i; // variabel integer

    system("CLS"); // clear screen

    cout << "Masukkan kalimat: "
    getline (cin, kalimat); // membaca inputan teks string 

    // a r y a
    for (i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]); 
    } // mengubah setiap karakter string menjadi huruf kapital

    cout << "kalimat kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}
