#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    while (n > 0) {
        int tc = n % 10;
        if (tc % 2 != 0) {
            printf("Khong phai la so toan chan",  n);
        }
        n /= 10;   
    }
	printf("La so toan chan", n);   
    return 0;
}
