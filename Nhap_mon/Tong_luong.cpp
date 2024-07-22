#include<stdio.h>

int main() {
	float soGio, luong, tongLuong;
	printf("Nhap so gio lam: ");
	scanf("%f", &soGio);
	printf("Nhap luong: ");
	scanf("%f", &luong);
	
	if(soGio <= 40) {
		tongLuong = soGio * luong;
	} else {
		tongLuong = 40 * luong + (soGio - 40) * luong * 1.5;
	}
	printf("Tien luong tong cong la: %.2f", tongLuong);
	return 0;
}