#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    // Deklarasi pointer : tipedata * namapointer;
    int *tunjuk;
    tunjuk = &a;

    cout << "Nilai a : " << a << endl;
    *tunjuk = 100;
    cout << "Nilai a sekarang : " << a << endl;

    // cout << "Nilai a : " << a << endl;
    // cout << "Alamat a : " << &a << endl;
    // cout << "Alamat yang ditunjuk pointer : " << tunjuk << endl;
    // cout << "Isi pointer : " << *tunjuk << endl;
}