#include<stdio.h>

int main() {
	int km;
	float tienCuoc;
	printf("Nhap so km: ");
	scanf("%d", &km);
	if(km == 1) {
		tienCuoc = 5000;
	} else if(km <= 30) {
		tienCuoc = 5000 + (km - 1) * 4000;
	} else {
		tienCuoc = 5000 + 30 * 4000 + (km - 31) * 3000;
	}
	printf("So tien phai tra: %.2f dong\n", tienCuoc);
	return 0;
}