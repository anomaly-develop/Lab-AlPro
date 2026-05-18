#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;
    cout << "Masukkan berat badan (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;

    bmi = berat / (tinggi * tinggi);

    cout << "BMI: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori: Berat Badan Kurang" << endl;
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Kategori: Berat Badan Normal" << endl;
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Kategori: Berat Badan Berlebih" << endl;
    }
    else {
        cout << "Kategori: Obesitas" << endl;
    }
}