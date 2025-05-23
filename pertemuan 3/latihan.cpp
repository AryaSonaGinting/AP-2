#include <iostream>
using namespace std;

int main() {
    int bilangan; // variabel integer
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> bilangan;

    if (bilangan % 10 == 0) //apakah angka 10 habis dibagi 0
{
        cout << bilangan << " angka kelipatan dari 10 tuh" << endl;
    } else if (bilangan % 5 == 0) //apakah angka 5 habis dibagi 0
           {
        cout << bilangan << " angka kelipatan dari 5 guys" << endl;
    } else // pernyaataan selain dari dua diatas
           {
        cout << bilangan << " keknya bukan kelipatan dari 5 maupun 10 deh" << endl;
    }
    
    return 0;
}
