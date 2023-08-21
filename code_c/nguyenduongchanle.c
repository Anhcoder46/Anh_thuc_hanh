#include<stdio.h>
/*int main() {
	int i;
	for(i = 1; i < 100; i = i + 2) {
		if(i == 5 || i == 7 || i == 93) {
			printf("%5d", i);
		}
	}
}
/*{
	int i;
	for(i == 1; i < 100; i += 2) {
		if(i == 5 || i == 7 || i == 93) {
			continue;
		}
		printf("%5d", i);
	}
}
cach 1{ */

int main() {

	int i;

	for(i = 0; i < 100; i++) {
		if(i % 2 == 1) {
			if(i == 5 || i == 7 || i == 93) {
				continue;
			}
			printf("%5d", i);
		}
	}
}
