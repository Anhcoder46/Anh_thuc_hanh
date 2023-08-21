#include<stdio.h>
main() {
	int i, n, m, dem = 0;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	printf("Nhap so nguyen m: ");
	scanf("%d", &m);
	if(n < m) {
		for(i = n; i <= m; i++) {
			if(i % 2 == 0) {
				dem = dem + 1;
			}
		}
		printf("Trong doan [%d,%d] co %d so chan \n",n ,m ,dem);
	}
	else {
		printf("Nhap sai roi e oi\n");
	}
}