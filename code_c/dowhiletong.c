#include<stdio.h>
int mian() {
	int n, s = 0, i;
	// n < m
	do {
		printf("Nhap n : ");
		scanf("%d", &n);
	}while(n <= 1 || n >= 100);
	for(i = 1; i <= n; i++) {
		s += i;
	printf("s = %d", s);
	}
}