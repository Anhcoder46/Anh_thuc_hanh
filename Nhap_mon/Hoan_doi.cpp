#include<stdio.h>

int main() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	if(a > b) {
		int tam = a;
		a = b;
		b = tam;
	}
	printf("Gia tri sau khi hoan doi cua a: %d, b: %d", a, b);
	return 0;
}