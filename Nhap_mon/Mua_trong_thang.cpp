#include <stdio.h>

int main() {
	int thang;
	
	printf("Nhap thang: ");
	scanf("%d", &thang);
	if(thang > 0 && thang < 13) {
		if(thang == 1 || thang == 2 || thang == 3) {
			printf("Mua xuan");
		} else if(thang == 4 || thang == 5 || thang == 6) {
			printf("Mua ha");
		} else if(thang == 7 || thang == 8 || thang == 9) {
			printf("Mua thu");
		} else {
			printf("Mua dong");
		}
	} else {
		printf("Khong hop le");
	}

	return 0;
}
