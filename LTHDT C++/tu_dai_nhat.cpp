#include<iostream>
#include<cstring>
using namespace std;
void timTuDaiNhat(char xau[]) {
	char tuDaiNhat[100];
	char temp[100];
	int length = strlen(xau);
	int tuDaiNhatLength = 0, tempLength = 0;
	for(int i = 0; i <= length; i++) {
		if(isalpha(xau[i])) {
			temp[tempLength++] = xau[i];
		}
		else {
			temp[tempLength] = '\0';
			if(tempLength > tuDaiNhatLength) {
				strcpy(tuDaiNhat, temp);
				tuDaiNhatLength = tempLength;
			}
			tempLength = 0;
		}
	}
	cout << "Tu dai nhat trong chuoi: " << tuDaiNhat << endl;
}
int main() {
	char xau[100];
	cout << "Nhap mot chuoi: ";
	cin.getline(xau, 100);
	timTuDaiNhat(xau);
	return 0;
}