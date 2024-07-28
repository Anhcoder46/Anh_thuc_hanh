#include <stdio.h>

int main() {
	int n, kt = 1, dv;
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);	
	} while(n < 0);

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
    return 0;
}