#include<stdio.h>

int main() {
	int n, kt = 1, dv, ch;
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);
	} while(n < 0);

	int tam = n;
	while(n != 0) {
		dv = n % 10;
		ch = ( n / 10) % 10;
		if(ch > dv) {
			kt = 0;
			break;
		}
		n = n / 10;
	}
	if(kt == 1) {
		printf("%d la so tiens", tam);
	} else {
		printf("%d khong phai la so tiens", tam);
	}
	return 0;
}