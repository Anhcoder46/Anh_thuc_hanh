#include<stdio.h>
#include<math.h>
main()
{
    //khai bao bien N
    int N;
    //khai bao bien dem
    int dem=0;
    printf("\nNhap N: ");
    scanf("%d", &N);
    if(N < 2)//neu N < 2 thì N khong phai so nguyen to
        printf("\nSo %d khong phai la so nguyen to", N);
    else
    {
        //vong lap for bat dau tu i = 1 và ket thuc khi i = N, moi lan lap i tang len 1
        for(int i = 1; i <= N; i++)
        {
            if(N % i == 0)//kiem tra uoc cua N 
            {
                dem+=1;//dem so luong uoc cua N
            }
        }
        if(dem == 2)//neu N có 2 uoc thì N la so nguyen to
        {
            printf("\nSo %d la so nguyen to", N);
        }
		else//nguoc lai N khong phai so nguyen to
		{
            printf("\nSo %d khong phai la so nguyen to", N);
        }     
    }
}
