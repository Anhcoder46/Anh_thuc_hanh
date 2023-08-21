#include<iostream>
#include<string>
using namespace std;
double tbc(double x, double y, double z) {
	return (x + y + z)/3;
}
int main() {
	string ten = " ";
	double toan(0.0), van(0.0), anh(0.0);
	getline(cin, ten);
	cin >> toan >> van >> anh;
	cin.ignore(23344, '\n');
	cout << ten << " co diem la: " << tbc(toan, van, anh);
	return 0;
}