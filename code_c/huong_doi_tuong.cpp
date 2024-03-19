#include <stdio.h>

void Nhapmang(int a[], int &n);
void Xuatmang(int a[], int n);
int TimkiemPT(int a[], int n, int x);
int KTtinhchatmang(int a[], int n);
int GTLN(int a[], int n);
int GTNN(int a[], int n);
void Sapxeptang(int a[], int n);
void Sapxepgiam(int a[], int n);
void ThemPT(int a[], int &n, int y, int vt);
void XoaPT(int a[], int &n, int vitri);

int main() {
    int a[1000], n, x, y, vt, vitri;
    Nhapmang(a, n);
    printf("Mang vua nhap la: ");
    Xuatmang(a, n);
    printf("\nNhap x = ");
    scanf("%d", &x);
    if (TimkiemPT(a, n, x)) {
    	printf("\nTrong mang co chua phan tu x!");
	} else {
		 printf("\nTrong mang khong chua phan tu x!");
	} 
	
	if (KTtinhchatmang(a, n)) {
		printf("\nMang chua hoan toan so le!");
	} else {
		printf("\nMang khong chua hoan toan so le!");
	}
    printf("\nGia tri lon nhat trong mang la: %d", GTLN(a, n));
    printf("\nGia tri nho nhat trong mang la: %d", GTNN(a, n));
    printf("\nSap xep tang dan trong mang la: ");
    Sapxeptang(a, n);
    printf("\nSap xep giam dan trong mang la: ");
    Sapxepgiam(a, n);
    printf("\nNhap them mot phan tu vao mang: ");
    scanf("%d", &y);
    printf("\nNhap them vi tri chen phan tu vao mang: ");
    scanf("%d", &vt);
    ThemPT(a, n, y, vt);
    printf("\nMang sau khi them mot phan tu: ");
    Xuatmang(a, n);
    printf("\nNhap vi tri muon xoa phan tu: ");
    scanf("%d", &vitri);
    XoaPT(a, n, vitri);
    printf("\nMang sau khi xoa mot phan tu: ");
    Xuatmang(a, n);
}

void Nhapmang(int a[], int &n) {
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void Xuatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int TimkiemPT(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            return 1;
    }
    return 0;
}

int KTtinhchatmang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            return 0;
    }
    return 1;
}

int GTLN(int a[], int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int GTNN(int a[], int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

void Sapxeptang(int a[], int n) {
    int tam;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
        printf("%d ", a[i]);
    }
}

void Sapxepgiam(int a[], int n) {
    int tam;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
        printf("%d ", a[i]);
    }
}

void ThemPT(int a[], int &n, int y, int vt) {
    if (vt >= 0 && vt <= n) {
        for (int i = n; i > vt; i--) {
            a[i] = a[i - 1];
        }
        a[vt] = y;
        n++; // Tang s? lu?ng ph?n t? trong m?ng
    }
}

void XoaPT(int a[], int &n, int vitri) {
    if (vitri >= 0 && vitri < n) {
        for (int i = vitri; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--; // Gi?m s? lu?ng ph?n t? trong m?ng
    }
}