#include <iostream>
using namespace std;

int main() {
    int i = 10;
    string ulang;

    // cout << "\nIni While\n";
    // while (i >= 1) { 
    //     cout << i << ". Lorem" << endl;
    //     i--;
    // }

    // DO WHILE STATEMENT
    cout << "\nIni Do While\n";
    do {
        cout << i << ". Lorem" << endl;
        cout << "Mau ngulang ga? ";
        cin >> ulang;
    } while (ulang == "ulang");
    cout << endl;
}