#include<iostream>
#include<cctype>
using namespace std;
int main() {
	int n{0};
	cin >> n;
	char a[n];
	// nhap mang
	for(int i = 0;i < n; i++) {
		cin >> a[i];
	}
	//xu ly
	for(int i = 0; i < n; i++) {
		if(islower (a[i])) {
			a[i] = toupper(a[i]);
		}
	}
	//int mang
	for(int i = 0; i < n; i++) {
		cout << a[i];
	}
	return 0;
}