#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= 2 * n - i; j++) {
			if(j < i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
		for(int i = 1; i >= n; i--) {
		for(int j = 1; j <= 2 * n - i; j++) {
			if(j < i)printf(" ");
			else printf("*");
		}
		printf("\n");
	}
}