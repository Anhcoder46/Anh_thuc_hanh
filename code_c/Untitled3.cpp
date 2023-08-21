#include<stdio.h>
main()
{
	long tong = 0;
	int n = 5;
	for (int i = 1 ; i <= n ; i++)	{
		tong = tong + i*(i + 1);
	}
	printf("tong = %d", tong);
	return 0;
}
