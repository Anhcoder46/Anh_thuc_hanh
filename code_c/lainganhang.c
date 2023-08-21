#include<stdio.h>
int main() {
	int tienvay, thang;
	printf("Nhap so tien can vay: ");
	scanf("%d", &tienvay);
	printf("\nSo tien can tra trong 12 thang: \n");
	printf("Ky han | Lai phai tra | Goc phai tra | So tien can tra | So tien con lai |");
	int laiphaitra;
	int gocphaitra;
	int sotiencantra;
	int sotienconlai = tienvay;
	for(thang = 1; thang <= 12; thang++) {
		laiphaitra = (sotienconlai) * 0.05;
		gocphaitra = tienvay / 12;
		sotiencantra = laiphaitra + gocphaitra;
		sotienconlai = sotienconlai - gocphaitra;
	}
	printf("\n| %4d | %12d | %12d | %15d | %15d |", thang, laiphaitra, gocphaitra, sotiencantra ,sotienconlai);
}