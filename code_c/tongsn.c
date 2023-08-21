#include<stdio.h>
int main() {
	int n, i, s = 0;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		s = s + (i * 10 + 3);
	}
	printf("%d", s);
}
