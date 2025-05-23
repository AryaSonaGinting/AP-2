#include <iostream> // header input c++
using namespace std;

int main () {

    float luas, p, l; //deklarasi variabel luas,panjang,lebar

    cout << "Masukkan panjang : ";
    cin >> p; // input pengguna memasukkan dan menyimpan di variabel'p'
    

    cout << "Masukkan lebar : ";
    cin >> l; // input pengguna memasukkan dan menyimpan di variabel'l'

    luas = p * l;
    cout << "Luas = " << luas << endl; // hasil

    return 0;
}
