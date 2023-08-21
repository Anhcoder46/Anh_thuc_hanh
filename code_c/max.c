#include<stdio.h>
int ln(int x, int y);
int main() {
	int a, b, c, max;
	printf("Nhap 3 so bat ky: ");
	scanf("%d%d%d", &a, &b, &c);
	max = ln(ln(a, b), c);
	printf("So lon nhat la: %d", max);
}
	int ln(int x, int y) {
		int max = x;
		if(y > max) {
			max = y;
		}
		return max;
	}
