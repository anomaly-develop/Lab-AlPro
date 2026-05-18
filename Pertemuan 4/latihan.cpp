#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input angka: ";
    cin >> n;

    int a = 1;
    bool tambah = true; 

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        if (tambah) {
            a = a + 7; 
        } 
        else {
            a = a * 2; 
        }
        tambah = !tambah; 
    }
    cout << endl;

}

