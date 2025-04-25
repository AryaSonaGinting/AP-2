#include <iostream>
#include <vector>

using namespace std;
int main(){
    // vector declaration and initialization
    vector<string> nama_karyawan = {"lebo", "ecut", "acamola", "amba", "kumbe"};
    // ascending element of vector
    // for(int i=0; i< nama_karyawan.size(); i++) {
    //     cout<< nama_karyawan[i] << endl;
    // }
    // for (string karyawan : nama_karyawan) {
    //     cout << karyawan << endl;
    // } 

    // add data to vector
    nama_karyawan.push_back("imam");

    // for(int i=0; i<nama_karyawan.size(); i++) {
    //     cout << nama_karyawan[i] << endl;
    // }

    // delete from vector
    nama_karyawan.pop_back();
    nama_karyawan.erase(nama_karyawan.begin() + 3);

    for(int i=0; i<nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }   
}