#include <iostream>
using namespace std;

int main()
{
    // Program untuk menentukan volume dan luas sebuah bola
    float luas, volume, jari; //deklarasi variabel luas,volume,jari-jari
    const float phi = 3.14; // deklrasi konstanta 

    cout << "Input jari-jari : ";
    cin >> jari; //meminta pengguna input nilai jari-jari dan meyimpan di variabel

    volume = ((float)4 / 3) * (phi) * (jari * jari * jari); //rumus hitung voulume bola
    luas = 4 * phi * jari * jari; //rumus hitung l.permukaan bola

    cout << "Volume : " << volume << endl; // menampilkan hasil hitung vol.
    cout << "luas : " << luas << endl; // menampilkan hasil hitung luas
}
