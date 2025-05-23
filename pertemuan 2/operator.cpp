@@ -0,0 +1,102 @@
#include <iostream> // header untuk c++
using namespace std;

int main () {
    int a, b; //deklarasi dua variabel integer

    system("CLS"); // membersihkan layar

    // Assignment Operator
    a = 3; // memberikan nilai 3 
    b = 5; // memberikan nilai 5

    // Arithmetical Operator
    // int tambah = a + b; // penjumlahan
    // int kurang = a - b; // pengurangan
    // int kali = a * b; // perkalian
    // float bagi = (float)a / (float)b; // type casting : berguna untuk mengubah tipe data dari sebuah variabel
    // int modulo = a % b; // menghitung sisa bagi a dengan b

    // cout << "Hasil penjumlahan = " << tambah << endl;
    // cout << "Hasil pengurangan = " << kurang << endl;
    // cout << "Hasil perkalian = " << kali << endl;
    // cout << "Hasil pembagian = " << bagi << endl;
    // cout << "Hasil sisa bagi = " << modulo << endl;

    // Relational Operator
    // cout << (a==b) << endl; // memeriksa apakah a sama dengan b (menghasilkan nilai boolean)
    // cout << (a<b) << endl; // Memeriksa apakah a kurang dari b (menghasilkan nilai boolean)
    // cout << (a<=b) << endl; // Memeriksa apakah a kurang dari atau sama dengan b (menghasilkan nilai boolean)
    // cout << (a>b) << endl; // Memeriksa apakah a lebih dari b (menghasilkan nilai boolean)
    // cout << (a>=b) << endl; // Memeriksa apakah a lebih dari atau sama dengan b (menghasilkan nilai boolean)
    // cout << (a!=b) << endl; // Memeriksa apakah a tidak sama dengan b (menghasilkan nilai boolean)

    // Logical Operator (&&,||, !)
    // cout << (true && true) << endl; // AND: true jika kedua operand true
    // cout << (true && false) << endl; // AND: false jika salah satu operand false
    // cout << (false && true) << endl; // AND: false jika salah satu operand false
    // cout << (false && false) << endl; // AND: false jika kedua operand false


    // cout << (true || true) << endl; // OR: true jika salah satu operand true
    // cout << (true || false) << endl; // OR: true jika salah satu operand true
    // cout << (false || true) << endl; // OR: true jika salah satu operand true
    // cout << (false || false) << endl; // OR: false jika kedua operand false

    // cout << !true << endl; // NOT: negasi dari true (menghasilkan false)
    // cout << !false << endl; // NOT: negasi dari false (menghasilkan true)

    // Bitwise Operator (&, |, ^, ~, >>, <<) --> biner
    // cout << (5&7) << endl; // Bitwise AND antara 5 (0101) dan 7 (0111) -> 0101 (5)
    // cout << (5|7) << endl; // Bitwise OR antara 5 (0101) dan 7 (0111) -> 0111 (7)
    // cout << (5^7) << endl; // Bitwise XOR antara 5 (0101) dan 7 (0111) -> 0010 (2)
    // cout << (~7) << endl; // Bitwise NOT dari 7 (0111) -> ...1000 (-8 pada representasi two's complement)
    // cout << (7 << 2) << endl; // Left shift 7 (0111) sebanyak 2 bit -> 11100 (28)
    // cout << (7 >> 2) << endl; // Right shift 7 (0111) sebanyak 2 bit -> 0001 (1)

    // Shorthand
    // a += 7; // a = a + 7;
    // cout << a << endl;

    // a -= 7; // a = a - 7;
    // cout << a << endl;

    // a *= 7; // a = a * 7;
    // cout << a << endl;

    // a /= 7; // a = a / 7;
    // cout << a << endl;

    // Increment, Decrement
    // Pre Increment
    // cout << a << endl;
    // cout << ++a << endl; // a menjadi 4, lalu 4 dioutputkan

    // cout << b << endl;
    // cout << ++b << endl; // b menjadi 6, lalu 6 dioutputkan

    // Post Increment
    // cout << a << endl;
    // cout << a++ << endl; // 4 dioutputkan, lalu a menjadi 5
    // cout << a << endl; //output: 5

    // cout << b << endl;
    // cout << b++ << endl; // 6 dioutputkan, lalu b menjadi 7
    // cout << b << endl; // output: 7

    // Pre Decrement
    // cout << a << endl;
    // cout << --a << endl; // a menjadi 4, lalu 4 dioutputkan

    // cout << b << endl;
    // cout << --b << endl; // b menjadi 6, lalu 6 dioutputkan

    // Post Decrement
    // cout << a << endl;
    // cout << a-- << endl; // 4 dioutputkan, lalu a menjadi 3
    // cout << a << endl; // output: 3

    // cout << b << endl;
    // cout << b-- << endl; // 6 dioutputkan, lalu b menjadi 5
    // cout << b << endl; // output: 5
}
