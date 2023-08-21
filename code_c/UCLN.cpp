#include <stdio.h>

// Hàm kiểm tra số nguyên tố
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Hàm tìm ước chung lớn nhất của 2 số
int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Cac cap so nguyen to cung nhau co uoc chung lon nhat la 1 la:\n");
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (isPrime(a[i]) == 1 && isPrime(a[j]) == 1 && gcd(a[i], a[j]) == 1) {
                printf("(%d, %d)\n", a[i], a[j]);
            }
        }
    }

    return 0;
}