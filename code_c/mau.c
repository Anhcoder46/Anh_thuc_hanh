#include<stdio.h>

int main() {
	int n = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	int i = 0;
	int a[n];
// bai 1
for(i = 0; i < n; i++) {
	scanf("%d", &a[i]);
}
// bai 2
for(i = 0; i < n; i++) {
	if(a[i] < 0) {
		printf("\nPhan tu am %d", a[i]);
	}
	if(a[i] > 0) {
		printf("\nPhan tu duong %d", a[i]);
	}
	if(a[i] % 2 == 0) {
		printf("\nPhan tu chan %d", a[i]);
	}
	if(a[i] % 2 != 0) {
		printf("\nPhan tu le %d", a[i]);
	}
}
	// bai 3
	int sum = 0;
	for(i = 0; i < n; i++) {
		if(a[i] > 0)
		sum += a[i];
	}
	printf("\nTong phan tu trong mang %d", sum);
// bai 4
for(i = 0; i < n; i++) {
	if(a[i] >= 100) {
	printf("\nVi tri phan tu cua mang la %d", i + 1);
	}
}
// bai 5
int Kiem_tra_so_hoan_thien(int n){
	int a = 0;
	int i;
	for(i = 1; i < n; i++) 
		if(n % i == 0)
			a += i;
	if(a==n)
		return 1;
	else
	return 0;
}
for(i = 0; i < n; i++) {
	if(Kiem_tra_so_hoan_thien(a[i]) == 1) {
		printf("\n%d la so hoan thien", a[i]);
	}
	else {
		printf("\n%d khong phai la so hoan thien", a[i]);
	}
}
	return 0;
}