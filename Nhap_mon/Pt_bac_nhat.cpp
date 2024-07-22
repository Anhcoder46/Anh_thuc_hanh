#include<stdio.h>

int main() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	if(a == 0) {
		if(b != 0) {
			printf("Phuong trinh vo nghiem");
		} else if(b == 0) {
			printf("Phuong trinh co vo so nghiem");
		}
	} else {
		float x = -b/a;
		printf("Phuong trinh co nghiem kep: %.2f", x);
	}
	return 0;
}