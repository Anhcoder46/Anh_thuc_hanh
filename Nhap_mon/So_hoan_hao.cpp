#include <stdio.h>

int main() {
    int n, sum = 0;

    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while(n < 0);

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        printf("%d la so hoan hao\n", n);
    } else {
        printf("%d khong phai la so hoan hao\n", n);
    }

    return 0;
}