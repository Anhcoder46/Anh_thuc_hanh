#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap so o vuong: ";
	cin >> n;
	for(int i =0; i <= n*2; i++) {
		for(int j = 0; j <= n*2; j++) {
			int l = 0;
			lap:
			if(i == l || j == l || i == n*2 - l || j == n*2 - l) {
				cout << n - l << " ";
			}
			else {
				l++;
				goto lap;
			}
		}
			cout << endl;
	}
	system("pause");
	return 0;
}