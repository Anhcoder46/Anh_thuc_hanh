#include<stdio.h>
int main()
 {
 	int a[10];
 	
 	for(int i = 0; i < 10; i++){
 		printf("Hay nhap gia tri a[%d]: ", i);
 		scanf("%d", &a[i]);
	 }
	 for(int i = 0 ; i < 10 ; i++)
	 {
	 	printf("a[%d] = %d\n", i, a[i]);
	 }
	 int tong = 0;
	 for(int i = 0; i < 10; i++)
	 {
	 	tong = tong + a[i];
	 }
	 printf("tong %d\n", tong);
	 
	 return 0;
}
