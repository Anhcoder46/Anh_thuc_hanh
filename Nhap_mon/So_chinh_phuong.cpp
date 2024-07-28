#include <stdio.h>

int main() {
    int n, i = 1;

    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while(n < 0);

    while (i * i <= n) {
        if (i * i == n) {
            printf("%d la so chinh phuong\n", n);
            return 0;
        }
        i++;
    }

    printf("%d khong phai la so chinh phuong\n", n);
    return 0;
}