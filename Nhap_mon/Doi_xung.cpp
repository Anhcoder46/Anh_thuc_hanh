#include <stdio.h>

int main() {
	int n, dao = 0, dv;
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);	
	} while(n < 0);
	int tam = n;
	while(n != 0) {
		dv = n % 10;
		dao = dao * 10 + dv;
		n = n / 10;
	}
	
	if(dao == tam) {
		printf("\n%d la so doi xung", tam);
	} else {
		printf("\n%d khong doi xung", tam);
	}
	return 0;
}
