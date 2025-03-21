#include <iostream>
using namespace std;

int main() {
    int bilangan;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 10 == 0) {
        cout << bilangan << " angka kelipatan dari 10 tuh" << endl;
    } else if (bilangan % 5 == 0) {
        cout << bilangan << " angka kelipatan dari 5 guys" << endl;
    } else {
        cout << bilangan << " keknya bukan kelipatan dari 5 maupun 10 deh" << endl;
    }
    
    return 0;
}