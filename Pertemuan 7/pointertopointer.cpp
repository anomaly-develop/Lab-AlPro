#include <iostream>
using namespace std;
int main()
{ 
    int x = 10;

    int *tunjuk;
    tunjuk = &x;

    int **tunjuktunjuk; //bintang 2 karena pointer ke pointer
    tunjuktunjuk = &tunjuk;

    cout << "Nilai x : " << x << endl;
    cout << "Isi yang didapat dari pointer pertama  " << *tunjuk << endl;
    cout << "Isi yang didapat dari pointer kedua  " << **tunjuktunjuk << endl;
}