#include <stdio.h>

int main() {
    int n, tongLapPhuong = 0, tam;

    do {
        printf("Nhap so nguyen duong: ");
        scanf("%d", &n);
    } while (n < 0);

    tam = n;

    while (n != 0) {
        int chuSo = n % 10;
        tongLapPhuong += chuSo * chuSo * chuSo;
        n /= 10;
    }

    if (tongLapPhuong == tam) {
        printf("%d la so Armstrong\n", tam);
    } else {
        printf("%d khong phai la so Armstrong\n", tam);
    }

    return 0;
}