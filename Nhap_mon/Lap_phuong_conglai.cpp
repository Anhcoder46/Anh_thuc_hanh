#include <stdio.h>

int main() {
    int n, kt = 1;
    printf("Nhap n: ");
    scanf("%d", &n);
    int tam = n;
    for (int i = 1; i <= n; i++) {
        int tram = i / 100;
        int chuc = (i % 100) / 10;
        int donvi = i % 10;

        int tongLapPhuong = tram * tram * tram + chuc * chuc * chuc + donvi * donvi * donvi;

        if (tongLapPhuong = 1) {
            printf("%d la so Armstrong\n", tam);
        } else {
        	printf("%d khong phai la so Armstrong\n", tam);
		}
	}
    return 0;
}