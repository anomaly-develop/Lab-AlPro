#include <stdio.h>

int main() {

    float berat, tinggi, bmi;
    printf("Masukkan berat badan (kg): ");
    scanf("%f", &berat);

    printf("Masukkan tinggi badan (m): ");
    scanf("%f", &tinggi);
    bmi = berat / (tinggi * tinggi);
    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Kategori: Berat Badan Kurang\n");
    }
    else if (bmi >= 18.5 && bmi < 25) {
        printf("Kategori: Berat Badan Normal\n");
    }
    else if (bmi >= 25 && bmi < 30) {
        printf("Kategori: Berat Badan Berlebih\n");
    }
    else {
        printf("Kategori: Obesitas\n");
    }
}