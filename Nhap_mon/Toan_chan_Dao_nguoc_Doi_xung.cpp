#include<stdio.h>

int main() {
	int n, kt = 1, dao = 0, dv;
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);	
	} while(n < 0);
	
	// Kiem tra so toan chan
	int tam = n;
	while(n != 0) {
		dv = n % 10;
		if(dv % 2 == 1) {
			kt = 0;
			break;
		}
		n = n / 10;
	}
	
	if(kt == 1) {
		printf("%d la so toan chan", tam);
	} else {
		printf("%d khong phai la so toan chan", tam);
	}
	// Kiem tra so dao nguoc
	n = tam;
	while(n != 0) {
		dv = n % 10;
		dao = dao * 10 + dv;
		n = n / 10;
	}
	printf("\nSo dao nguoc cua %d la: %d", tam, dao);
	
	if(dao == tam) {
		printf("\n%d la so doi xung", tam);
	} else {
		printf("\n%d khong doi xung", tam);
	}
}