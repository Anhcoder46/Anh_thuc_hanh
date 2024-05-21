//Bài toán sắp xếp hậu
#include<iostream>
using namespace std;
int a[20], n;
bool Ok(int x2, int y2) {
	for(int i = 1; i < x2 ;i++) {
		if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2)) {
			return false;
		}		
	}
	return true;
}
void Xuat() {
	for(int i = 1; i <= n; i++) {
		 cout << " " <<a[i];
	}
	cout << endl;
}
void Try(int i) {
	for(int j = 1; j <= n; j++) {
		if(Ok(i, j)) {
			a[i] = j;
			if(i == n) {
				Xuat();
			}
			Try(i + 1);
		}
	}
}
int main() {
	cout << "Nhap n: ";
	cin >> n;
	Try(1);
}