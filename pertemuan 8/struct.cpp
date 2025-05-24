#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat {
    string jalan;     // nama jalan tempat tinggal
    string kota;      // nama kota
    int kodePos;      // kode pos
};

struct Mahasiswa {
    string nama;      // nama mahasiswa
    int umur;         // umur mahasiswa
    float ipk;        // IPK mahasiswa
    Alamat alamat;    // alamat lengkap (pakai struct Alamat)
};

int main(){
    system("CLS"); // ngebersihin layar (khusus Windows)

    Mahasiswa mhs1; // buat objek mahasiswa

    /*
    // contoh pengisian manual (sementara dimatiin)
    mhs1.nama = "Arya";
    mhs1.umur = 18;
    mhs1.ipk = 4.00;

    mhs1.alamat.jalan = "Jalan jamin Ginting";
    mhs1.alamat.kota = "Berastagi";
    mhs1.alamat.kodePos = 20153;

    cout << "Alamat = " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;
    */

    vector<Mahasiswa> mahasiswa; // wadah banyak data mahasiswa
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // buang karakter enter yang tersisa
        cout << "Masukkan Nama = "; 
        getline(cin, mhs1.nama); // input nama lengkap

        cout << "Masukkan Umur = "; 
        cin >> mhs1.umur; // input umur

        cout << "Masukkan Ipk = ";
        cin >> mhs1.ipk; // input IPK

        mahasiswa.push_back(mhs1); // simpan ke vector
    }

    // tampilin data semua mahasiswa
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "Ipks : " << mahasiswa[i].ipk << endl;
    }
}
