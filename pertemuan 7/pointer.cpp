#include <iostream>
using namespace std;

// fungsi penjumlahan biasa
void penjumlahan(int a, int b){
    cout << a + b << endl;
}

// fungsi penjumlahan pakai pointer
void penjumlahanpointer(int *a, int *b){
    *a += *b;
    cout << *a << endl;
}

int main() {
    system("CLS"); // bersihin layar (Windows)

    // deklarasi pointer
    int number = 35;
    int *pointer_number = &number ; // pointer nunjuk ke alamat number

    cout << "isi variabel number = " << number << endl;
    cout << "alamat dari memori variabel = " << &number << endl;
    cout << "isi variabel pointer_number = " << pointer_number << endl;
    cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;

    // operasi lewat pointer
    *pointer_number = 25; // ubah nilai number lewat pointer
    cout << "isi variabel number = " << number << endl;
    cout << "alamat dari memori variabel = " << &number << endl;
    cout << "isi variabel pointer_number = " << pointer_number << endl;
    cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;

    // pointer di array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num; // pointer nunjuk ke awal array

    *pointer_num += 5; // tambahin 5 ke elemen pertama array
    cout << "isi variabel num = " << num[0] << endl;
    cout << "alamat dari memori elemen ke-4 = " << &num[3] << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;

    // pointer sebagai parameter fungsi
    int num1 = 5;
    int num2 = 7;
    penjumlahan(num1, num2); // nilai tetap
    cout << num1 << endl;
    cout << num2 << endl;

    penjumlahanpointer(&num1, &num2); // nilai num1 diubah
    cout << num1 << endl;
    cout << num2 << endl;

    // pointer ke pointer
    int score = 4;
    int *pointer_score = &score;
    int **ptr_pointer_score = &pointer_score; // pointer yang menunjuk pointer

    cout << "isi variabel score = " << score << " dan alamat memorinya adalah " << &score << endl;
    cout << "isi pointer_score = " << pointer_score
         << ", isi yang ditunjuk = " << *pointer_score
         << ", alamat pointer_score = " << &pointer_score << endl;

    cout << "isi ptr_pointer_score = " << ptr_pointer_score
         << ", isi yang ditunjuk = " << *ptr_pointer_score
         << ", alamat ptr_pointer_score = " << &ptr_pointer_score << endl;

    int *ptr = new int; // untuk alokasi memory dinamis
    *ptr = 30;
    cout << "isi variabel ptr = " << *ptr << " dan alamat = " << &ptr << endl;

    delete ptr; // untuk hapus memori
    cout << "isi variabel ptr (setelah delete) = " << *ptr << " dan alamat = " << &ptr << endl;

    return 0;
}
