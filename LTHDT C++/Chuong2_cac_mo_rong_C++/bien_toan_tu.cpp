#include<iostream>
using namespace std;

int main() {
	int x, y;
	cout << "Nhap so thu nhat: ";
	cin >> x;
	cout << "Nhap so thu hai: ";
	cin >> y;
	char Op;
	cout << "Nhap toan tu (+-*/): ";
	cin >> Op;
	switch(Op) {
		case '+':
			cout << "Ket qua: X + Y = " << x + y << "\n";
			break;
		case '-':
			cout << "Ket qua: X - Y = " << x - y << "\n";
			break;
		case '*':
			cout << "Ket qua: X * Y = " << long(x) * y << "\n";
			break;
		case '/':
			if(y) {
				cout << "Ket qua: X / Y = " << float(x) / y << "\n";
			} else {
				cout << "Khong the chia duoc!" << "\n";
			}
			break;
		default:
			cout << "Khong hieu toan tu nay!" << "\n";
	}
	return 0;
}