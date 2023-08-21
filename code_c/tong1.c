 #include<stdio.h>
 int main() {
 	int n , i, s = 0;
 	float sum = 0;
 	for(i = 1; i <= n ; i++) {
	 	sum += i;
 	do{
 		printf("Nhap n: ");
 		scanf("%d", &n);
	 }
	 while(n <= 0);
	 for(i = 1; i <= n; i++) {
	 	sum += (float)1 / i;
	 }
	 printf("Tong la: %.2f", sum);
	 }
	 return sum;
 }