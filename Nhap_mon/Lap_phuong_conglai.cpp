#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int tram = i / 100;
        int chuc = (i % 100) / 10;
        int donvi = i % 10;

        int tongLapPhuong = tram * tram * tram + chuc * chuc * chuc + donvi * donvi * donvi;

        if (tongLapPhuong == i) {
            printf("%d la so Armstrong\n", i);
        } else {
        	printf("%d khong phai la so Armstrong\n", i);
		}
    }

    return 0;
}