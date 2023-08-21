#include<stdio.h>
#include<math.h>
main()
{
	int km, so_tien;
	printf("Nhap so km: ");
	scanf("%d", &km);
	if(km <= 1)
	{
		so_tien = 5000;
	}
	else if(km <= 31)
	{
		so_tien = 5000 + (km - 1) * 4000;
	}
	else // km > 31
	{
		so_tien = 5000 + 30 * 4000 + (km - 31) * 3000;
	}
	printf("So tien phai tra la:%d ", so_tien);
}
