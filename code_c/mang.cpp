#include<stdio.h>
int main()
 {
 	int _size = 5;
 	int a[_size];
 	for(int i = 0; i < _size; i++)
	 {
 		printf("Hay nhap gia tri a[%d]: ", i);
 		scanf("%d", &a[i]);
	 }
	 for(int i = 0 ; i <  _size ; i++)
	 {
	 	printf("a[%d] = %d\n", i, a[i]);
	 }
	 int tong = 0;
	 for(int i = 0; i < _size; i++)
	 {
	 	tong = tong + a[i];
	 }
	 printf("tong %d\n", tong);
	 
	 return 0;
}
