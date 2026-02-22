#include <stdio.h>  //memanggil library stdio.h untuk printf dan scanf

int main() {    //fungsi utama dari program

    char nama[100], nip[50], umur[10], departemen[50], jabatan[50], gaji[20]; 
    //deklarasi variabel dengan tipe char

    printf("Masukkan nama: ");  //menampilkan teks "masukkan nama" ke layar
    scanf("%s", nama);    //menerima input dari user dan menyimpannya ke variabel nama

    printf("Masukkan NIP: ");   //menampilkan teks "masukkan NIP" ke layar
    scanf("%s", nip); //menerima input NIP

    printf("Masukkan umur: ");  //menampilkan teks "masukkan umur" ke layar
    scanf("%s", umur);    //menerima input umur

    printf("Masukkan departemen: ");    //menampilkan teks "masukkan departemen" ke layar
    scanf("%s", departemen);  //menerima input departemen

    printf("Masukkan jabatan: ");   //menampilkan teks "masukkan jabatan" ke layar
    scanf("%s", jabatan); //menerima input jabatan

    printf("Masukkan gaji: ");  //menampilkan teks "masukkan gaji" ke layar
    scanf("%s", gaji);    //menerima input gaji

    printf("Nama: %s\n", nama);   //menampilkan nama
    printf("NIP: %s\n", nip); //menampilkan NIP
    printf("Umur: %s\n", umur);   //menampilkan umur
    printf("Departemen: %s\n", departemen);   //menampilkan departemen
    printf("Jabatan: %s\n", jabatan); //menampilkan jabatan
    printf("Gaji: %s\n", gaji);   //menampilkan gaji

}   //menutup program utama