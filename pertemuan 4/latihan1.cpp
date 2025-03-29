#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan kalimat: "
    getline (cin, kalimat);

    // a r y a
    for (i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]); 
    }

    cout << "kalimat kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}