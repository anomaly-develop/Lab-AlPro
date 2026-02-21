#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
    string nama, nim, waktu;
    char kom, jenis_kelamin;
    float ipk;

    cout << "hello world\n";
    
    // cin >> nama;
    //cout << nama;

    cout << "masukkan nama : " << endl;
    getline (cin, nama);

    cout << "masukkan kom : " << endl;
    cin >> kom ;

    cout << "masukkan nim : " << endl;
    cin >> nim ;

    cout << "masukkan ipk : " << endl;
    cin >> ipk ;

    cout << "masukkan jenis kelamin (L/P) :" << endl;
    jenis_kelamin = getche();

    cout << "\n";

    cout << "nama : " << nama << endl;
    cout << "kom : " << kom << endl;
    cout << "nim : " << nim << endl;
    cout << "ipk : " << ipk << endl;
    cout << "jenis_kelamin :" ;
    putchar (jenis_kelamin);
    cout << endl;

    //inputan waktu (pagi, siang, sore, malam)
    cout << "masukkan waktu: ";
    cin >> waktu;

    //selamat pagi, billy
    cout << "\nSelamat " << waktu << "," << nama;
    return 0;
}