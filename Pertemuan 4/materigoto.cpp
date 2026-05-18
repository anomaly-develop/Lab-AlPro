#include <iostream>
using namespace std;

int main() {
    
    // goto a;
    // c:
    // cout << "Anak ";
    // goto d;
    // d:
    // cout << "Ilmu ";
    // goto e;
    // b:
    // cout << "Adalah ";
    // goto c;
    // a:
    // cout << "Aku ";
    // goto b;
    // e:
    // cout << "Komputer ";
    // goto f;
    // f:
    // cout << "USU ";
    // cout << endl; 


    int i = 40;
    lipat :
    if (i%5 == 0) {
        cout << i << " ";
    }
    i--;

    if (i >= 5) {
        goto lipat;
    }
    cout << endl;
    
}
