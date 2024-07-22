#include<stdio.h>

int main() {
	float diem;
	printf("Nhap diem: ");
	scanf("%f", &diem);
	
	if(diem >= 8) {
		printf("Xep loai: Gioi");
	} else if(diem >= 6.5) {
		printf("Xep loai: Kha");
	} else if(diem >= 5) {
		printf("Xep loai: Trung binh");
	} else {
		printf("Xep loai: Yeu");
	}
	return 0;
}