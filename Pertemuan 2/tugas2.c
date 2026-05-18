#include <stdio.h>

int main() {
    const float phi = 3.14159;
    float r, luas, volume;

    printf("Masukkan jari-jari bola: ");
    scanf("%f", &r);

    luas = 4 * phi * r * r;

    volume = (4.0 / 3.0) * phi * r * r * r;

    printf("Luas bola: %.2f\n", luas);
    printf("Volume bola: %.2f\n", volume);

    return 0;
}