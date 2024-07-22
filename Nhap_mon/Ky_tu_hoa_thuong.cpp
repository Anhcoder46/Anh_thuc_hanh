#include<stdio.h>

int main() {
	char c;
	printf("Nhap vao ky tu: ");
	scanf("%c", &c);
	if(c >= 'A' && c <= 'Z') {
		c = c + 32;
		printf("%c la ky tu hoa.", c);
	} else if(c >= 'a' && c <= 'z') {
		c = c - 32;
		printf("%c la ky tu thuong.", c);
	} else {
		printf("%c khong phai la ky tu hoa hay thuong.", c);
	}
	
	return 0;
}