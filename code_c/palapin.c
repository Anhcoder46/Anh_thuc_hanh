#include<stdio.h>
int palin(int x);
int main() {
	int n, i, dem = 0;
	do {
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n <= 100 || n >= 10000);
	for(i = 100; i <= n; i++) {
		//neu i la so palin --> dem
		if(palin(i) == 1) {
			printf("\n%d", i);
			dem++;
		}
	}
	printf("\n Co %d so palin thoa man", dem);
}
int palin(int x) {
	int dao = 0, tam, don_vi, kt = 0;
	tam = x;
	//giu gia tri ban dau cua x vao bien tam
	//dao so x
	while(x > 0) {
		don_vi = x % 10;
		dao = dao * 10 + don_vi;
		x = x / 10;
	}
	if(dao == tam) {
		kt = 1;
	}
	return kt;
}