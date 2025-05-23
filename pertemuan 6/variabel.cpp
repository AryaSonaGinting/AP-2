#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // nama global sebagai variabel bertipe string

void namavariabel() { // membuat fungsi variabel dari "namavariabel" tersebut
    string namalokal = "komputer";
    //coba akses
    cout << namalokal << endl;

    //coba akses
    cout << namaGlobal << endl;
}
int main() {
    namavariabel(); // memanggil variabel dari void "namavariabel"

    //coba akses
    cout << namaGlobal << endl;

    //coba akses
    // cout << namalokal << endl; (gabisa)


}
