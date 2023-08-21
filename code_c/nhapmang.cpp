#include<stdio.h>

void Nhap_mang(int a[], int _size)
{
	for(int i = 0; i < _size; i++)
	{
		printf("Hay nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}
void Xuat_mang(int a[], int _size)
{
	for(int i = 0; i < _size; i++)
	{
		for(int i = 0; i << _size; i++)
		{
			printf("a[%d] = %d\n", i, a[i]);
		}
	}
}
int main() {

    int _size = 5;
    int a[_size];
    
    Nhap_mang(a, _size);
    Xuat_mang(a, _size);
}
