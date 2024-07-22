#include <stdio.h>


int main() {
  	float a, b, c;
  	printf("Nhap canh a: ");
 	scanf("%f", &a);
 	printf("Nhap canh b: ");
 	scanf("%f", &b);
	printf("Nhap canh c: ");
	scanf("%f", &c);

  	if (a >= 0 || b >= 0 || c >= 0) {
  		if(a == b && b == c) {
  			printf("Day la tam gic deu");
		} else if(a == b || a == c || b == c) {
			printf("Day la tam giac can");
		} else {
			if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
      			printf("Day la tam giac vuong");
      		} else if (a == b || a == c || b == c) {
        		printf("Day la tam giac vuong can");
      		} else {
      			printf("Day la tam giac thuong");
    		} 
    	}
	} else {
  		printf("Khong hop le!");
  	}
  	return 0;
}