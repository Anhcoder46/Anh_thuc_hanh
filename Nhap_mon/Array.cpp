#include <stdio.h>
#include <math.h>
#define MAX 100

void nhap(int a[], int n);
void xuat(int a[], int n);
void maxArray(int a[], int n);
void vtLeSoChinhPhuong(int a[], int n);
void timPhanTu(int a[], int n);
void mangTangDan(int a[], int n);
int ngt(int n);
void timNguyenToDauTien(int a[], int n);
void ngLe(int a[], int n);

int main() {
    int a[MAX], n;
    do {
        printf("Nhap so phan tu: ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX);

    nhap(a, n);
    xuat(a, n);
    maxArray(a, n);
    vtLeSoChinhPhuong(a, n);
    timPhanTu(a, n);
    mangTangDan(a, n);
    timNguyenToDauTien(a, n);
    ngLe(a, n);

    return 0;
}

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    printf("\n");
}

// Tim phan tu lon nhat trong mang
// Vi tri phan tu lon nhat xuat hien dau tien trong mang
// Vi tri phan tu lon nhat xuat hien cuoi cung trong mang la
void maxArray(int a[], int n) {
    int max = a[0];
    int vtDauTien = 0;
    int vtCuoiCung = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            vtDauTien = i;
            vtCuoiCung = i;
        } else if (a[i] == max) {
            vtCuoiCung = i;
        }
    }

    printf("\nPhan tu lon nhat trong mang la: %d", max);
    printf("\nVi tri phan tu lon nhat xuat hien dau tien trong mang la: %d", vtDauTien);
    printf("\nVi tri phan tu lon nhat xuat hien cuoi cung trong mang la: %d", vtCuoiCung);
}

// Xuat ra man hinh cac phan tu chinh phuong nam tai vi tri le trong mang
void vtLeSoChinhPhuong(int a[], int n) {
    for (int i = 1; i < n; i += 2) {
        int sqrt_value = sqrt(a[i]);
        if (sqrt_value * sqrt_value == a[i]) {
            printf("\n%d la so chinh phuong tai vi tri le thu: %d", a[i], i);
        }
    }
}

// In tat ca cac phan tu trong mang co gia tri nam trong doan [x, y]
void timPhanTu(int a[], int n) {
    int x, y;
    printf("\nNhap x: ");
    scanf("%d", &x);
    printf("Nhap y: ");
    scanf("%d", &y);
    printf("\nCac phan tu nam trong doan [%d, %d] la: ", x, y);
    for (int i = 0; i < n; i++) {
        if (a[i] >= x && a[i] <= y) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

// Kiem tra co phai la mang tang dan hay khong
void mangTangDan(int a[], int n) {
    int kt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            kt = 0;
            break;
        }
    }

    if (kt == 1) {
        printf("\nDay la mang tang dan");
    } else {
        printf("\nKhong phai mang tang dan");
    }
}

// Kiem tra so nguyen to
int ngt(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    if (n <= 3) {
        return 1; // Prime
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0; // Not prime
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

// Tim so nguyen to dau tien trong mang
void timNguyenToDauTien(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (ngt(a[i]) == 1) {
            printf("\n%d la so nguyen to dau tien trong mang", a[i]);
            return;
        }
    }
    printf("\nTrong mang khong co so nguyen to nao");
}

// In cac so nguyen to trong mang
void ngLe(int a[], int n) {
    printf("\nCac so nguyen to trong mang la: ");
    for (int i = 0; i < n; i++) {
        if (ngt(a[i]) == 1) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
