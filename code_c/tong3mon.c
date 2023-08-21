#include<stdio.h>
#include<math.h>
main()
{
	int toan, ly, hoa, tong_diem;
	printf("Diem mon toan: ");
	scanf("%d", &toan);
	printf("Diem mon ly: ");
	scanf("%d", &ly);
	printf("Diem mon hoa: ");
	scanf("%d", &hoa);
	tong_diem = toan + ly + hoa;
	if(tong_diem >= 15 && toan >= 4 && ly >= 4 && hoa >= 4)
	{
		printf("Ket qua dat: ");
		if(toan > 5 && ly > 5 && hoa > 5)
		{
			printf("\nHoc deu cac mon");
		}
		else 
		{
			printf("\nHoc chua deu cac mon");
		}
	}
	else
	{
		printf("Thi hong");
	}
}
