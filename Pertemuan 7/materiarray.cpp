// buat array
#include <iostream>
using namespace std;

int main() {
    int data[3] = {3, 5, 10};
    cout << "Nilai data[0] : " << data[0] << endl;
    int *tunjuk = data; //ga perlu & karena nama array sudah menunjuk ke alamat pertama
    // cout << *(tunjuk + 2) << endl; //output 10 (data[2])

    //biar tampil semua data arraynyaaa
    for (int i = 0; i < 3; i++) {
        cout << *(tunjuk + i) << endl;
    }
}