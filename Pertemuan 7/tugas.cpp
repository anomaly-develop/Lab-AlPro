// soal kalkulator
#include <iostream>
using namespace std;

void tambah (int a, int b, int *hasil) {
    *hasil = a + b;
}

void kurang (int a, int b, int *hasil) {
    *hasil = a - b;
}

void kali (int a, int b, int *hasil) {
    *hasil = a * b;
}

void bagi (int a, int b, int *hasil) {
    *hasil = a / b;
}

int main() {
    
    int a, b, hasil;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    cout << "Hasil penjumlahan : ";
    tambah(a, b, &hasil);
    cout << hasil << endl;

    cout << "Hasil pengurangan : ";
    kurang(a, b, &hasil);
    cout << hasil << endl;

    cout << "Hasil perkalian : ";
    kali(a, b, &hasil);
    cout << hasil << endl;

    cout << "Hasil pembagian : ";
    bagi(a, b, &hasil);
    cout << hasil << endl;
}