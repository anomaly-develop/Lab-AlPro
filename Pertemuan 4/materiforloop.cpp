#include <iostream>
using namespace std;

int main() {

    //atribut length()
    string kata;
    cout << "Masukkan kata: ";
    cin >> kata;
    for (int i = 0; i < kata.length(); i++) {
        cout << i+1 << ". " << kata[i] << endl;
    }
}
