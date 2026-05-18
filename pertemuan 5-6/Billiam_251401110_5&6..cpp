#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int angka_acak() {
    return rand() % 20 + 1;
}
char operator_acak() {
    char op[4] = {'+', '-', '*', '%'};
    return op[rand() % 4];
}

int hitung(int a, int b, char op) {
    if (op == '+') return a + b;
    else if (op == '-') return a - b;
    else if (op == '*') return a * b;
    else return a % b;
}
void tampil_history(vector<string> riwayat) {
    if (riwayat.size() == 0) {
        cout << "belum ada history";
    } else {
        for (int i = 0; i < riwayat.size(); i++) {
            cout << "sesi " << i+1 << ": " << riwayat[i] << endl;
        }
    }
}
int main() {
    vector<string> riwayat;
    int pilih;

    do {
        cout << "\n1. mulai kuis\n";
        cout << "2. history\n";
        cout << "3. keluar\n";
        cout << "pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            int jumlah;
            cout << "jumlah soal (1-10): ";
            cin >> jumlah;

            if (jumlah < 1 || jumlah > 10) {
                cout << "input tidak valid";
                continue;
            }

            int a[10], b[10];
            char op[10];
            int skor = 0;

            for (int i = 0; i < jumlah; i++) {
                a[i] = angka_acak();
                b[i] = angka_acak();
                op[i] = operator_acak();

                int jawab;
                cout << "soal " << i+1 << ": "
                     << a[i] << " " << op[i] << " " << b[i] << " = ";
                cin >> jawab;

                int benar = hitung(a[i], b[i], op[i]);

                if (jawab == benar) {
                    skor++;
                }
            }
            cout << "skor: " << skor << "/" << jumlah << endl;
            riwayat.push_back(to_string(skor) + "/" + to_string(jumlah));
        }
        else if (pilih == 2) {
            tampil_history(riwayat);
        }
    } while (pilih != 3);
    cout << "program selesai";
}