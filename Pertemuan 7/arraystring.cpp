// array dengan string/char
#include <iostream>
using namespace std;
// int main() {
//     char nama[] = "BILLIAMAGSATATEMAHIA";
//     char *tunjuk = nama;

//     // cout << &tunjuk << endl;
//     // cout << *tunjuk << endl;
//     // cout << *(tunjuk + 8) << endl;
//     // cout << tunjuk << endl; //outputnya satu kata karena variabel sudah menunjuk ke alamat pertama dari array nama, jadi akan menampilkan semua karakter setelahnya

//     while (*tunjuk != '\0') { // \0 itu penanda akhir string (ada hubungannya sama array kosong [])
//         cout << *tunjuk;
//         tunjuk++;
//     }
// }



// penggabungan array, pointer, dan fungsi
void ubah (int *arrai) {
    arrai[0] = 100;
}

int main() {
    int data[3] = {1,2,3};
    int dati[3] = {4,5,6};

    cout << data[0] << endl;
    ubah(data);

    cout << data[0] << endl;

}