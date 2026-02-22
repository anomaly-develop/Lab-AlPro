#include <iostream> //memanggil library iostream untuk cin, cout
using namespace std;    //supaya tidak perlu memanggil std sebelum cin dan cout

int main() {    //fungsi utama dari program

    string nama, nip, umur, departemen, jabatan, gaji; //deklarasi variabel dengan tipe string

    cout << "Masukkan nama: ";  //menampilkan teks "masukkan nama" ke layar
    cin >> nama;    //menerima input dari user dan menyimpannya ke variabel nama

    cout << "Masukkan NIP: ";   //menampilkan teks "masukkan NIP" ke layar
    cin >> nip; //menerima input NIP

    cout << "Masukkan umur: ";  //menampilkan teks "masukkan umur" ke layar
    cin >> umur;    //menerima input umur

    cout << "Masukkan departemen: ";    //menampilkan teks "masukkan departemen" ke layar
    cin >> departemen;  //menerima input departemen

    cout << "Masukkan jabatan: ";   //menampilkan teks "masukkan jabatan" ke layar
    cin >> jabatan; //menerima input jabatan

    cout << "Masukkan gaji: ";  //menampilkan teks "masukkan gaji" ke layar
    cin >> gaji;    //menerima input gaji

    cout << "Nama: " << nama << endl;   //menampilkan nama
    cout << "NIP: " << nip << endl; //menampilkan NIP
    cout << "Umur: " << umur << endl;   //menampilkan umur
    cout << "Departemen: " << departemen << endl;   //menampilkan departemen
    cout << "Jabatan: " << jabatan << endl; //menampilkan jabatan
    cout << "Gaji: " << gaji << endl;   //menampilkan gaji

}   //menutup program utama