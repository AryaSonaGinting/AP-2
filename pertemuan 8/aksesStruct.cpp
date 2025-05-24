#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{  // membuat pengelompokan data dari variabel berbeda menjadi satu di "Mahasiswa"
    string nama;
    int umur;
    float ipk;
};

int main(){
    Mahasiswa mhs1; // membuat "mhs1" menjadi sebuah variabel dari  "Mahasiswa"
    
    mhs1.nama = "Arya"; // membuat variabel mhs1.nama dengan hasil "Arya"
    mhs1.umur = 18; // membuat variabel mhs1.umur dengan hasil "18"
    mhs1.ipk = 4.00; // membuat variabel mhs1.ipk dengan hasil "4.00"

    // cout << "Nama = " << mhs1.nama << endl;
    // cout << "Umur = " << mhs1.umur << endl;
    // cout << "Ipk = " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1; // membuat pointer dari variabel "Mahasiswa"
    cout << "Nama = " << ptrMhs->nama << endl; // memanggil pointer nama
    cout << "Umur = " << ptrMhs->umur << endl; // memanggil pointer umur
    cout << "Ipk = " << ptrMhs->ipk << endl; // memanggil pointer ipk
}
