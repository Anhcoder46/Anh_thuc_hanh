#include<iostream>
using namespace std;
// Vi trùng cứ 1h lại nhân đôi. Vậy sau 5h sẽ có mấy con vi trùng nếu ban đầu có 2 con
int viTrung(int n, int banDau) {
	if(n == 0) {
		return banDau;
	} else {
		return 2 * viTrung(n - 1,  banDau);
	}
}

int main() {
	int banDau = 2;
	int soGio = 5;
	int tam = viTrung(soGio, banDau);
	cout << "So luong vi khuan sau 5h la: " << tam << endl;
	return 0;
}