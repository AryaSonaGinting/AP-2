#include <iostream>
using namespace std;

// fungsi tanpa nilai balikan
void tampilkanpesan(){
    cout << "=== selamat datang di AP 2 ===" << endl;
}
// fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

// fungsi overload
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;  
}

 // fungsi rekursif
int faktorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}  
int main() {
    system("CLS");

    // menggunakan fungsi tanpa nilai balikan
    tampilkanpesan();

    int x = 5, y = 3;
    //menggunakan fungsi dengan nilai balikan
    int hasiltambah = tambah(x,y);
    cout << "hasil penjumlahan: " << hasiltambah << endl; 

    // menggunakan fungsi overload
    int hasilkaliint = kali(x, y);
    double hasilkalidouble = kali(5.5, 2.0);

    cout << "hasil perkalian (int) : "<< hasilkaliint << endl;
    cout << "hasil perkalian (double) : "<< hasilkalidouble << endl; 

    // menggunakan fungsi rekursif

    int angka = 5;
    cout << "faktorial dari " << angka << " adalah: " << faktorial(angka) << endl; 

    return 0;
}