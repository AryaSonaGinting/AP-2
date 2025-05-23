#include <iostream>
#include <string> // memasukkan file header string

using namespace std;

string Kapital(const string &kalimat) // menerima input string, dan membuat string baru dengan kalimat kapital
 {
    string hasil = kalimat;
    for (char &c : hasil) {
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            c = toupper(c);
        }
    }
    return hasil; //kembali ke variabel hasil
}

int main() { // memulai program
    string kalimat; // variabel string kalimat
    
    cout << "Masukkan beberapa kalimat: ";
    getline(cin, kalimat);
    
    string hasil = Kapital(kalimat); // memanggil kalimat dan disimpan sebagai hasil 
    
    cout << "Hasil: " << hasil << endl; // output hasil
    
    return 0;
}
