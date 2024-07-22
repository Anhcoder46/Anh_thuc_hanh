#include<stdio.h>

int main() {
	int luong, phucap, luongthuclanh;
	char thuhang;
	printf("Nhaop luong: ");
	scanf("%d", &luong);
	printf("Nhap thu hang: ");
	fflush(stdin);
	scanf("%c", &thuhang);
	
	if(thuhang == 'A' || thuhang == 'a') {
		phucap = 300000;
	} else if(thuhang == 'B' || thuhang == 'b') {
		phucap = 200000;
	} else if(thuhang == 'C' || thuhang == 'c') {
		phucap = 100000;
	} else {
		phucap = 0;
	}
	luongthuclanh = luong + phucap;
	printf("Luong thuc lanh la: %d", luongthuclanh);
	return 0;
}