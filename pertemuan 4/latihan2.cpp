#include <iostream>
#include <string>

using namespace std;

string Kapital(const string &kalimat) {
    string hasil = kalimat;
    for (char &c : hasil) {
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            c = toupper(c);
        }
    }
    return hasil;
}

int main() {
    string kalimat;
    
    cout << "Masukkan beberapa kalimat: ";
    getline(cin, kalimat);
    
    string hasil = Kapital(kalimat);
    
    cout << "Hasil: " << hasil << endl;
    
    return 0;
}
