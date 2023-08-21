#include<stdio.h>
int main() {
	int i, n, p = 1;
	printf("Nhap so n: ");
	scanf("%d", &n);
	if(n % 2 == 0) {
		for(i = 2; i <= n; i += 2) {
				p = p * i;
		}
	}
	else {
		for(i = 1; i <= n; i += 2) {
			p = p * i;
		}
	}
	printf("%d! = %d", n, p);
}