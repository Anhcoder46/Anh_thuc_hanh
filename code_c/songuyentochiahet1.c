#include<stdio.h>
int main() {
	int n, i, kt = 0;
	printf("Nhap so nguyen duong: ");
	scanf("%d", &n);
	if(n < 2) {
		printf("%d khong phai la so nguyen to", n);
	}
	else {
		for(i = 2; i <= n; i++) {
			if(n % 1 == 0) {
				kt = 1;
				break;
			}
		}
		if(kt == 1) {
			printf("%d khong phai la so nguyen to", n);
		}
		else {
			printf("%d la so nguyen to", n);
		}
	}
}