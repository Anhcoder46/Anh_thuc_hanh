#include<stdio.h>
int main() {
	int hang , cot;
	hang = 3, cot = 4;
	for(int i = 1; i <= hang; i++) {
		for(int j = 1; j <= cot; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}