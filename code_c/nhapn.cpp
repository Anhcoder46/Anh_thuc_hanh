#include<stdio.h>
int main() {
	int n, i, kt = 0;
	do {
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n <= 0);
	printf("\nNhap dung! Ban vua nhap n = %d",n);
	for(i = 1; i <= n; i++) {
		if(i % 5 == 0) {
			
			printf("\n%d la so chia het cho 5", i);
		}
		else {
			printf("\n%d la so khong chia het cho 5", i);
		}
	}
	return kt;
}