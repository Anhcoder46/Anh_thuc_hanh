#include<stdio.h>
int kiem_tra_toan_chan(int a);
int dem_chu_so(int a);
int main() {
	int n, m, i;
	do{
		printf("Nhap n nguyen duong: ");
		scanf("%d", &n);
		printf("Nhap m nguyen duong: ");
		scanf("%d", &m);
	}while(n >= m);
	if(kiem_tra_toan_chan(n) == 0) {
		printf("%d toan chan\n", n);
	}
	else {
		printf("%d khong toan chan\n", n);
	}
	printf("So luong chu trong %d la %d\n", n, dem_chu_so(n) + 1);
	for(i = 1; i <= n; i++) {
		if(n % i == 0 && m % i == 0) {
			printf("%5d", i);
		}
	}
}
int kiem_tra_toan_chan(int a) {
	int kt = 0;
	while(a > 0) {
		int tam = a % 10;
		if(tam % 2 != 0) {
			kt = 1;
		}
		a /= 10;
	}
	return kt;
}
int dem_chu_so(int a) {
	int dem = 0;
	while(a >= 10) {
		a = a / 10;
		dem++;
	}
	return dem;
}
