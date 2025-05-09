#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

void namavariabel() {
    string namalokal = "komputer";
    //coba akses
    cout << namalokal << endl;

    //coba akses
    cout << namaGlobal << endl;
}
int main() {
    namavariabel();

    //coba akses
    cout << namaGlobal << endl;

    //coba akses
    // cout << namalokal << endl; (gabisa)


}