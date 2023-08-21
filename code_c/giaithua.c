#include<stdio.h>
//viet chuong trinh tinh giai thua va tra ve ket qua
int main(){
int n, giai_thua = 1, i;
printf("Nhap n: ");
scanf("%d", &n);
for(i = 1; i <= n; i++){
    giai_thua = giai_thua * i;
}
printf("giai thua = %d\n", giai_thua);
return 0;
}