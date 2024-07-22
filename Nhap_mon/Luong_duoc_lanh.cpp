#include<stdio.h>

int main() {
	int luong, ngaycong;
	float luongthuclanh;
	printf("Nhap luong: ");
	scanf("%d", &luong);
	printf("Nhap ngay cong: ");
	scanf("%d", &ngaycong);

	if(ngaycong == 26) {
	luongthuclanh = luong;
	} else if(ngaycong > 26) {
		luongthuclanh = luong + (ngaycong -26) * 150;
	} else {
		luongthuclanh = luong - (26 - ngaycong) * 100;
	}
	printf("Luong thuc lanh la: %f", luongthuclanh);
	return 0;
}