#include<stdio.h>
#include<math.h>
main()
{
	float so, can;
	printf("Nhap so bat ky: ");
	scanf("%f", &so);
	if (so >= 0)
	{
		can = sqrt(so);
		printf("can bac hai cua %f la: %f\n", so, can);
	}
	else //so < 0
	{
		can = sqrt(fabs(so));
		printf("can bac hai cua %f la: %f\n", so, can);
	}
}
