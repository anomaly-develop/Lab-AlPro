// // operator
// // contohnya seperti ini:
// // 1 + 2 (+ itu operator penjumlahan)
// // jenisnya : assignment, aritmethic, relational, logical, bitwise, increment, decrement
// relational operator : >, <, >=, <=, ==, !=
// logical operator : &&, ||, ! (&& itu operator AND, || itu operator OR, ! itu operator NOT)
// bitwise operator : &, |, ^, ~, <<, >> (& itu operator AND, | itu operator OR, ^ itu operator XOR, ~ itu operator NOT, << itu operator shift left, >> itu operator shift right)
// assignment operator : =, +=, -=, *=, /=, %= (= itu operator assignment, += itu operator penjumlahan dan assignment, -= itu operator pengurangan dan assignment, *= itu operator perkalian dan assignment, /= itu operator pembagian dan assignment, %= itu operator modulus dan assignment)
// increment operator : ++ (fungsinya untuk menambahkan nilai 1 pada variabel)
// decrement operator : -- (fungsinya untuk mengurangi nilai 1 pada variabel)
// assignment operator digunakan untuk memberikan nilai pada variabel

#include <iostream>
using namespace std;

int main() {
    system("cls");

    int a;
    int b;

    // assignment operator
    a = 5;
    b = 7;

    // aritmetic operator
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    int bagi = a / b;
    float bagi_float = (float)a / b; // untuk mendapatkan hasil pembagian dengan tipe data float
    int mod = a % b;
    
    cout << "Hasil penjumlahan : " << tambah << endl;
    cout << "Hasil pengurangan : " << kurang << endl;
    cout << "Hasil perkalian : " << kali << endl;
    cout << "Hasil pembagian : " << bagi << endl;
    cout << "Hasil pembagian dengan tipe data float : " << bagi_float << endl;
    cout << "Hasil modulo : " << mod << endl;

    //relational operator
    cout << (a==b) << endl; // hasilnya false karena a tidak sama dengan b
    cout << (a>b) << endl; // hasilnya false karena a tidak lebih besar dari b
    cout << (a>=b) << endl; // hasilnya false karena a tidak lebih besar atau sama dengan b
    cout << (a<b) << endl; // hasilnya true karena a lebih kecil dari b
    cout << (a<=b) << endl; // hasilnya true karena a lebih kecil atau sama dengan b
    cout << (a!=b) << endl; // hasilnya true karena a tidak sama dengan b

    //logical operator
    cout << (true && true) << endl; // true (fungsinya untuk mengecek apakah kedua operand bernilai true)
    cout << (true && false) << endl; // false
    cout << (false && true) << endl; // false
    cout << (false && false) << endl; // false

    cout << (true || true) << endl; // true
    cout << (true || false) << endl; // true
    cout << (false || true) << endl; // true
    cout << (false || false) << endl; // false

    cout << (!true) << endl; // false
    cout << (!false) << endl; // true

    // bitwise operator
    cout << (5&7) << endl; // 5 = 0101, 7 = 0111, hasilnya 0101 = 5
    cout << (5|7) << endl; // 5 = 0101, 7 = 0111, hasilnya 0111 = 7
    cout << (5^7) << endl; // 5 = 0101, 7 = 0111, hasilnya 0010 = 2
    cout << (~7) << endl; // 7 = 0111, hasilnya 1000 = -8 (karena menggunakan sistem bilangan komplemen dua)
    cout << (7 << 2) << endl; // 7 = 0111, hasilnya 11100 = 28 (karena shift left berarti menggeser bit ke kiri sebanyak 2)
    cout << (7 >> 2) << endl; // 7 = 0111, hasilnya 0001 = 1 (karena shift right berarti menggeser bit ke kanan sebanyak 2)

    //short hand operator
    a += 5; // a = a + 5
    cout << a << endl;
    a -= 5; // a = a - 5
    cout << a << endl;
    a *= 5; // a = a * 5
    cout << a << endl;
    a /= 5; // a = a / 5
    cout << a << endl;
    a %= 5; // a = a % 5
    cout << a << endl;

    // increment dan decrement operator
    // pre increment
    cout << a << endl;
    cout << ++a << endl; // a = a + 1
    cout << a << endl;
    //pre decrement
    cout << a << endl;
    cout << --a << endl; // a = a - 1
    cout << a << endl;
    // post increment
    cout << a << endl;
    cout << a++ << endl; // a = a + 1
    cout << a << endl;
    // post decrement
    cout << a << endl;
    cout << a-- << endl; // a = a - 1
    cout << a << endl;
    
}
