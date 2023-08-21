#include <stdio.h>
#include <conio.h>

void main() {
	float s, t, p;
	int n;
	clrscr();

	printf("Nhap so tien ban dau : ");
	scanf("%f", &s);
	printf("Nhap so tien can co : ");
	scanf("%f", &t);
	printf("Nhap lai suat %% nam : ");
	scanf("%f", &p);

	for (p = 0.01 * p, n = 0; s < t; s += s * p, n++);
	printf("So nam can gui tiet kiem = %d\n", n);
	printf("Sau %d nam gui tiet kiem, so tien co la : %4.2f", n, s);

	getch();
}