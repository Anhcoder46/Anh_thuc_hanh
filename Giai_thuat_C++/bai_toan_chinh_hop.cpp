//Đề:Liệt kê các chỉnh hợp không lặp chập K
#include<iostream>
using namespace std;
int n, k, a[100];
bool c[100];
void nPk(int i) {
	for(int j = 1; j <= n; j++) {
		if(c[j]) {
			a[i] = j;
			c[j] = false;
			if(i == k) {
				for(int l = 1; l <= k; l++) {
					cout << a[l] << " ";
				}
				cout << endl;
			} else {
				nPk(i + 1);
			}
			c[j] = true;
		}
	}
}
int main(){
	cin >> n;
	cin >> k;
	for(int i = 1; i <= n ; i++) {
		c[i] = true;
	}
	nPk(1);
}