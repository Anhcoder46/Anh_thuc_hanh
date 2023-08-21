#include <stdio.h>

int main() {
    int i, n, s = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%5d", i);
            s += i;
        }
    }
    s -= n;
    if (s == n) {
        printf("\n%d la so hoan hao", n);
    } else {
        printf("\n%d khong phai la so hoan hao", n);
    }
    return 0;
}