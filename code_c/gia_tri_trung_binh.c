#include <stdio.h>
#include <math.h>

// Tinh trung binh cong
void avg(int n) {
	int sum=0;
	float r;
	for(int i = 0; i < n; i++) {
		sum += a[i];
	}
	r = (float)sum/n;
	printf("\nGia tri trung binh = %.2f", r);
}