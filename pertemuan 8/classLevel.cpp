#include <iostream>
using namespace std;

class contohAkses {
    private: 
        int privateVar;      // cuma bisa diakses dari dalam class ini
    protected:
        int protectedVar;    // bisa diakses oleh class ini & class turunannya
    public:
        int publicVar;       // bisa diakses dari mana aja

        // constructor buat set nilai awal
        contohAkses() {
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }

        void tampilkanSemua() {
            // akses semua variabel dari dalam class
            cout << "akses dari dalam Class : " << endl;
            cout << privateVar << endl;
            cout << protectedVar << endl;
            cout << publicVar << endl;
        }
};

// kelas turunan dari contohAkses
class turunan : public contohAkses {
    public: 
        void aksesProtected() {
            // bisa akses protected & public, tapi bukan private
            cout << "Akses publicVar " << publicVar << endl;
            cout << "akses protectedVar " << protecte
