#include<stdio.h>

int main() {
	int hang, cot;
	printf("Nhap hang: ");
	scanf("%d", &hang);
	printf("Nhap cot: ");
	scanf("%d", &cot);
	
	for(int i = 1; i <= hang; i++) {
		for(int j = 1; j <= cot; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}