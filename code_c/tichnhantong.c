#include<stdio.h>
int main() {
	int i, don_vi, chuc;
	for(i = 10; i < 100; i++) {
		chuc = i % 10;
		don_vi = i / 10;
		if(chuc * don_vi == 2 * (chuc + don_vi)) {
			printf("%5d", i);
		}
	}
}