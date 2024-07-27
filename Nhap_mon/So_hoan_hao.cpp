#include <stdio.h>
#include <math.h>

int isPerfectNumber(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int isSquareNumber(int num) {
    int root = sqrt(num);
    return root * root == num;
}

int main() {
    int number;
    printf("Nhập vào một số nguyên: ");
    scanf("%d", &number);

    if (isPerfectNumber(number)) {
        printf("%d là số hoàn hảo.\n", number);
    } else {
        printf("%d không phải là số hoàn hảo.\n", number);
    }

    if (isSquareNumber(number)) {
        printf("%d là số chính phương.\n", number);
    } else {
        printf("%d không phải là số chính phương.\n", number);
    }

    return 0;
}
