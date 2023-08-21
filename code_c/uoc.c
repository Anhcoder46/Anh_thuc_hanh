#include<stdio.h>
#include<math.h>
main()
{
	int n, i;
	printf("Nhap mot so n: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		if(n%i==0)
		printf("\nUoc cua so n la %d", i);
	}
}
