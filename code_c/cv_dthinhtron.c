#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159
int main() {
	int r;
	float chu_vi, dien_tich;
	printf("Nhap ban kinh r: ");
	scanf("%d", &r);
	chu_vi = 2 * PI * r;
	dien_tich = PI * r * r;
	printf("Chu vi hinh tron la: %.2f", chu_vi);
	printf("\nDien tich hinh tron la: %.2f", dien_tich);
	getch();
}                                   
                                      