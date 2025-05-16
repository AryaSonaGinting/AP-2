#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main(){
    system("CLS");

    Mahasiswa mhs1;

    // mhs1.nama = "Arya";
    // mhs1.umur = 18;
    // mhs1.ipk = 4.00;

    // mhs1.alamat.jalan = "Jalan jamin Ginting";
    // mhs1.alamat.kota = "Berastagi";
    // mhs1.alamat.kodePos = 20153 ;

    // cout << "Alamat = " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout<< "Mahasiswa " << i+1 << endl;

        cin.get();
        cout<< "Masukkan Nama = "; 
        getline(cin, mhs1.nama);

        cout<< "Masukkan Umur = "; 
        cin>> mhs1.umur;

        cout<< "Masukkan Ipk = ";
        cin>> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i=0; i<n; i++) {
        cout << "mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "Ipks : " << mahasiswa[i].ipk << endl;
    }
}