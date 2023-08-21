#include <stdio.h>

int main() {
    int arr[100];
    int n, i, x;
    printf("Nhap so phan tu cua mang: ", n);
    scanf("%d", &n);

    //Nhap gia tri cho mang
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri can tim: ", x);
    scanf("%d", &x);

    //Tim vi tri dau tien xuat h
}