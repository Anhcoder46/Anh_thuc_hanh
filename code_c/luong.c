#include<stdio.h>
int main() {
	int h, m, luong;
	printf("Nhap so gio h = ");
	scanf("%d", &h);
	printf("Nhap gia tien m = ");
	scanf("%d", &m);
	if(h <= 40) {
		luong = h * m;
		printf("So tien nhan vien nhan duoc = %d", luong);
	}
	else {
	if(h > 45 && h <= 50) {
		luong = 40 * m + 5 * 1.8 * m + ( h - 45) * 2.5 * m;
		printf("So tien nhan vien nhan duoc %d", luong);
		}
	if(h > 40 && h <= 45) {
		luong = 40 * m + ( h - 40) * 1.8 * m;
		printf("So tien nhan vien nhan duoc %d", luong);
		}
	if(h > 50) {
		luong = 40 * m + 5 * 1.8 * m + 5 * 2.5 *m + ( h - 50) * 2.6 * m;
		printf("So tien nhan vien nhan duoc %d", luong);
		}
	}
}