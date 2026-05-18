#include <iostream>
using namespace std;

class ContohAkses {
    private:
        int privateVar;

    protected:
        int protectedVar;

    public:
        int publicVar;

    // constructor (penetap nilai awal kelas)
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    // // constructor dengan parameter
    // ContohAkses(int x) {
    //     privateVar = x;
    //     protectedVar = 3;
    //     publicVar = 2;
    // }

    // menampilkan semua variabel
    void tampilkanSemua() {
        cout << "Akses dari dalam kelas : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public:
        void aksesProtected() {
            cout << "Akses dari dalam class turunan : " << endl;
            // cout << privateVar << endl; //(error karena private)
            cout << protectedVar << endl;
            cout << publicVar << endl;
        }
};

int main() {
    system("cls");

    // // buat yang pake parameter (harus ada nilai yang dimasukkan)
    // ContohAkses obj(10);

    //biasa
    ContohAkses obj;
    obj.tampilkanSemua();


    // cout << "Akses dari luar kelas : " << endl;
    // cout << obj.publicVar << endl;
    // cout << obj.protectedVar << endl; //(error karena protected)
    // cout << obj.privateVar << endl; //(error karena private)

    Turunan tur;
    tur.aksesProtected();

    system("pause");
}