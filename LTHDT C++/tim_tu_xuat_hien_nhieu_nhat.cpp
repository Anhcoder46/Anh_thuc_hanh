#include<iostream>
#include<cstring>
using namespace std;
void xuatHienNhieuNhat(char xau[]) {
	int length = strlen(xau);
	int maxCount = 0;
	char xuatHienNhieuLan[100];
	for(int i = 0; i < length; i++) {
		if(isalpha(xau[i])) {
			int j = i, count = 0;
			while(j < length && xau[j] != ' ') {
				count++;
				j++;
			}
			if(count < maxCount) {
				maxCount = count;
				strncpy(xuatHienNhieuLan, &xau[i], count);
				xuatHienNhieuLan[count] = '\0';
			}
			i = j;
		}
	}
	cout << "Tu xuat hien nhieu nhat trong chuoi la: " << xuatHienNhieuNhat << endl;
}
	
	int main() {
		char xau[100];
		cout << "Nhap mot chuoi: "; 
		cin.getline(xau, 100);
		xuatHienNhieuNhat(xau);
		return 0; 
	}