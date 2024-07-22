#include<stdio.h>

int main() {
	float toan, ly, hoa, tongDiem;
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem ly: ");
	scanf("%f", &ly);
	printf("Nhap diem hoa: ");
	scanf("%f", &hoa);
	tongDiem = toan + ly + hoa;
	if(tongDiem >= 15 && toan >= 5 && ly >= 5 && hoa >= 5) {
		printf("Dau");
		printf("\nHoc deu cac mon");
	} else if(toan > 3.9 && ly > 3.9 && hoa > 3.9) {
		printf("Hoc chua deu cac mon");
	} else {
		printf("Thi hong");
	}
	return 0;
}