#include<stdio.h>
#include<math.h>
main()
{
	int n;
	printf("Nhap so bat ky: ");
	scanf("%d", &n);
	int can = sqrt(n);
	if(can * can == n)
	{
		printf("%d la so chinh phuong", n);
	}
	else
	{
		can = sqrt(fabs(n));
		printf("%d khong phai la so chinh phuong", n);
	}
}
