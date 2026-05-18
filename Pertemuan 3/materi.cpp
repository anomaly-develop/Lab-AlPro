#include <iostream>
using namespace std;

// int main() {
//     system("cls");
//     int x;

//     cout << "Masukkan nilai: ";
//     cin >> x;

//     //if statement
//     if (x > 75) {
//         cout << "Anda lulus dengan nilai: " << x << endl;
//     }
//     else {
//         cout << "Anda tidak lulus dengan nilai: " << x << endl;
//     }
// }

// int main() {
//     system("cls");

//     string lampu;
//     cout << "Kondisi : ";
//     getline(cin, lampu);
//     if (lampu == "Hijau") {
//         cout << "Silahkan jalan" << endl;
//     }
//     else if (lampu == "Kuning") {
//         cout << "Berhati-hati" << endl;
//     }
//     else {
//         cout << "Berhenti" << endl;
//     }
// }

//nested if statement
int main() {
    int x;
    cout << "Masukkan nilai: ";
    cin >> x;

    if (x > 75) {
        cout << "Anda lulus dengan nilai: " << x << endl;
        if (x > 100) {
            cout << "Nilai anda sempurna" << endl;
        }
    }
    else {
        cout << "Anda tidak lulus dengan nilai: " << x << endl;
    }




























    





