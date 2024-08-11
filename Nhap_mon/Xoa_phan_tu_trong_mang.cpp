#include <stdio.h>
#define MAX 100

void nhap(int a[], int n);
void xuat(int a[], int n);
void Xoa(int a[], int *n, int vt);
int vtLeDauTien(int a[], int n);
int vtLeCuoiCung(int a[], int n);
void Them(int a[], int *n, int vt, int x);
void ChenX(int a[], int n);
void Copy(int a[], int n);

int main() {
    int a[MAX], n, vtd, vtc, x;
    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 1 || n > MAX);
    nhap(a, n);
    xuat(a, n);

    //Xoa phan tu dau tien trong mang
    Xoa(a, &n, 0);
    printf("\n");
    xuat(a, n);

    vtd = vtLeDauTien(a, n);
    if (vtd >= 0) {
        printf("\nPhan tu le dau tien xuat hien tai vi tri thu: %d", vtd);
    } else {
        printf("\nMang khong co phan tu le");
        vtd = 0;
    }

    Xoa(a, &n, vtd);
    printf("\n");
    xuat(a, n);

    vtc = vtLeCuoiCung(a, n);
    if (vtc == -1) {
        vtc = n - 1;
    }
    Xoa(a, &n, vtc);
    printf("\n");
    xuat(a, n);

    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    ChenX(a, n);
    Copy(a, n);
}

void nhap(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
}

void Xoa(int a[], int *n, int vt) {
    int i;
    for (i = vt; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

int vtLeDauTien(int a[], int n) {
    int i, vt = -1;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            vt = i;
            break;
        }
    }
    return vt;
}

int vtLeCuoiCung(int a[], int n) {
    int i, vt = -1;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] % 2 != 0) {
            vt = i;
            break;
        }
    }
    return vt;
}

void Them(int a[], int *n, int vt, int x) {
    int i;
    if (vt >= 0 && vt <= *n) {
        for (i = *n - 1; i >= vt; i--)
            a[i + 1] = a[i];
        a[vt] = x;
        (*n)++;
    }
}

void ChenX(int a[], int n) {
    int x, vt, max = a[0], max_index = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
    }

    printf("Nhap gia tri x: ");
    scanf("%d", &x);

    Them(a, &n, max_index + 1, x);
    printf("\n");
    xuat(a, n);
}

void Copy(int a[], int n) {
    int b[MAX], c[MAX], nb = 0, nc = 0, i;
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            b[nb++] = a[i];
        } else {
            c[nc++] = a[i];
        }
    }
    printf("Mang b chua cac phan tu le la: ");
    xuat(b, nb);
    printf("\n");
    printf("Mang c chua cac phan tu chan la: ");
    xuat(c, nc);
}