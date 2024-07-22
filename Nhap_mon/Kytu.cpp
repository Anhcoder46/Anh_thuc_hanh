#include<stdio.h>

int main() {
	char kytu;
	printf("Nhap vao mot ky tu: ");
	scanf("%c", &kytu);
	
	if(kytu == 'A' || kytu == 'a') {
		printf("Ada");
	} else if(kytu == 'B' || kytu == 'b') {
		printf("Basic");
	} else if(kytu == 'C' || kytu == 'c') {
		printf("Cobol");
	} else if(kytu == 'D' || kytu == 'd') {
		printf("Android");
	} else if(kytu == 'F' || kytu == 'f') {
		printf("Fortran");
	} else if(kytu == 'W' || kytu == 'w') {
		printf("Windows Phone");
	} else {
		printf("Khong hop le!");
	}
	return 0;
}