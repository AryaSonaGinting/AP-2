#include <iostream>
using namespace std;

class contohAkses {
    private: 
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;
        //constructor
        contohAkses(){
            privateVar = 1;
            protectedVar = 2;
            publicVar = 3;
        }
    void tampilkanSemua() {
        cout << "akses dari dalam Class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

// kelas turunan
class turunan : public contohAkses {
    public: 
    void aksesProtected() {
        cout << "Akses publicVar " << publicVar << endl;
        cout << "akses protectedVar " << protectedVar << endl;
    }
};

int main(){
    contohAkses obj;
    obj.tampilkanSemua();

    cout << "akses dari luar kelas : " << endl;
    cout << obj.publicVar << endl;
    // cout << obj.privateVar << endl; // error 
    // cout << obj.protectedVar << endl; // error

    turunan tur;
    tur.aksesProtected();
}