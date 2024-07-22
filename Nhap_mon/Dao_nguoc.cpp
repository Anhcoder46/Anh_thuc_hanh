#include<stdio.h>
int main(){
    int n, tam;
    scanf("%d", &n);
    int temp = 0;
    while(n > 0) {
        tam = n % 10;
        temp = temp *  10 + tam;
        n = n / 10;
    }
    printf("%d", temp);
}