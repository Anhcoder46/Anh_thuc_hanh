#include<stdio.h>
int kiemTraHoanThien(int n) {
	int a=0;
	int i;
	for(i=1;i<n;i++)
		if(n%i==0)
			a=a+i;
	if(a==n)
		return 1;
	else return 0;			
}
int main () {
	int n=0;
	printf ("nhap n =");
	scanf("%d",&n);
	int a[n];
	int i=0;
	//bai1
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	//bai2
	for (i=0;i<n;i++){
	if (a[i]<0)
		printf ("pt am trong mang %d\n",a[i]);
	if (a[i]>0)
		printf ("pt duong trong mang %d\n",a[i]);
	if (a[i]%2==0)
		printf ("pt chan trong mang %d\n",a[i]);
	if (a[i]%2!=0)
		printf ("pt le trong mang %d\n",a[i]);		
	}
	//bai3
	int tong=0;
	for(i=0;i<n;i++)
		if(a[i]>0)
			tong=tong+a[i];
	printf ("tong cac pt so duong trong mang %d\n",tong);
	//bai4
	for (i=0;i<n;i++){
		if (a[i]>=100)
			printf ("vi tri phan tu cua mang co gai tri >=100 %d\n",i+1);
			}
	//bai5
	for(i=0;i<n;i++){
		if(kiemTraHoanThien(a[i])==1)
			printf ("%d la so hoan thien\n",a[i]);
		else printf ("%d khong la so hoan thien\n",a[i]);
		}
	return 0;
}