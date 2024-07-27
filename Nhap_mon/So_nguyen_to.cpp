#include<stdio.h>
#include<math.h>

int main() {
	int n, kt = 1, dao = 0, dv;
	do {
		printf("Nhap so nguyen duong: ");
		scanf("%d", &n);	
	} while(n < 0);
	
	int tam = n;
	for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			kt = 0;
			break;
		}
		n = n / 10;
	}
	
	if(kt == 1) {
		printf("%d la so nguyen to", tam);
	} else {
		printf("%d khong phai la so nguyen to", tam);
	}
	return 0;
}