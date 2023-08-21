#include<stdio.h> 
int main() {
	int n, m, dem = 0, i = 0;
	printf("Nhap so n: ");
	scanf("%d", &n);
	printf("Nhap so m: ");
	scanf("%d", &m);
	if(n < m) {
		i = n;
		while(i <= m ) {
			if(i % 3 == 0) {
				printf("%d la so chia het", n);
				dem++;
			}
		}
		i++;
	}
	else {
		printf("Nhap lai");
	}
}