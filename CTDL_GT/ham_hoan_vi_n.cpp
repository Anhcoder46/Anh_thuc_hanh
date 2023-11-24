#include<iostream>
#include<string>
using namespace std;
//Hoán vị các số từ n
void abc(int n, string a = "") {
	if (a.size() == n) { 
		//kiểm tra đọ dài string
		cout << a << " ";
		return;
	}
	for (int j=1; j<=n; j++) {
		if (a.find (to_string(j)) > n ) {
			abc( n, a + to_string(j)); //đệ quy
		}
	}
}

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	abc(n);
	return 0;
}
