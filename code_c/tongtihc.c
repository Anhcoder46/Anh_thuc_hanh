#include<stdio.h>
int main() {
	int n, s = 0, p = 1;
	do{
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n < 1);
	for(int i = 1; i <= n; i++) {
		s = s + p;
		p = p * i;
	}
	printf("tich cua bieu thuc la %d", s);
}
// while
/*#include<stdio.h>
int main() {
	int i  = 1, n, s = 0, p = 1;
	do {
		printf("Nhap so n: ");
		scanf("%d", &n);
	}while(n < 1);
	while(i <= n) {
		s = s + p;
		p = p * i;
		i++;
	}
	printf("tich cua bieu thuc la %d", s);
}*/