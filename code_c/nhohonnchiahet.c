#include<stdio.h>
int main() {
	int a, b, n, i, s = 0;
	printf("nhap 3 so nguyen: ");
    scanf("%d%d%d", &a, &b, &n);
    if(a < n && b < n) {
       for (int i = a; i <= n; i++)
        {
            if(i % a == 0 && i % b != 0)
            s += i;
        }
        printf(" Tong cac so thoa man: %d ", s);
	}
	else {
		printf("\nSo khong thoa man");
		printf("\nVui long nhap lai");
	}
}
