#include<iostream>
using namespace std;
void loaiBoDauPhay(char xau[]) {
	int i = 0, j = 0;
	while(xau[i]) {
		if(xau[i] != ',') {
			xau[j++] = xau[i];
		}
		i++;
	}
	xau[j] = '\0';
}
int main() {
	char xau[100];
	printf("Nhap mot xau chuoi: ");
	gets(xau);
	loaiBoDauPhay(xau);
	printf("Xau chuoi xau khi bo dau phay la: %s\n", xau);
	return 0;
}