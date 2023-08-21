#include<stdio.h>



int main() {
	cout << "Nhap kim tu thap so: ";
	int n, k;
	cout >> n;
	for(int i = 0; i <= n; i++) {
		for(int s = 1; i <= n; i++) {
		cout << " ";
	}
	k = i % 10;
	for(int j = 1; j <= i; j++) {
		cout << k++;
		if(k = 10) k = k - 10;
	}
	if(k == 0) k = k + 8;
	else k = k - 2;
	for(int j = 1; j < i; j++) {
		cout << k--;
		if(k == -1) k = k + 10;
	}
	cout << endl;
	}
	return 0;
}