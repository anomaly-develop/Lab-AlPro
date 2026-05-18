// tugas ! menghitung luas dan volume bola
#include <iostream>
using namespace std;
int main() {
    const float phi = 3.14;
    float r, luas, volume;
    cout << "Masukkan jari-jari bola: ";
    cin >> r;
    luas = 4 * phi * r * r;
    volume = (4.0/3.0) * phi * r * r * r;
    cout << "Luas bola: " << luas << endl;
    cout << "Volume bola: " << volume << endl;
    return 0;
}