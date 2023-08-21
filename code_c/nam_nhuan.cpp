#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main() {
	int ngay, thang, n;
	cout << "Ngay: ";
	cin >> ngay;
	cout << "Thang: ";
	cin >> thang;
	if(thang <= 1 || thang <= 12) {
		switch(thang) {
		case 1: case 3: case 7: case 8: case 10: case 12:
			cout << "Thang " << thang << "co 31 ngay";
				break;
		case 4: case 6: case 9: case 11:
			cout << "Thang " << thang << "co 30 ngay";
				break;
		case 2:
			cout << "Moi nhap them nam: ";
			cin >> n;
			if(n % 4 == 0) {
				cout << "Thang " << thang << "co 29 ngay";
			}
			else {
				cout << "Thang " << thang << "co 28 ngay";
			}
			break;
		}
	}
	else cout << "Khong ton tai thang nay";
	cout << "\n";
	int nam;
	cout << "Nam: ";
	cin >> nam;
	if((nam % 4 == 0) && (nam % 100 != 0) || (nam % 400 == 0)) {
		cout << "Nam" << nam << "la nam nhuan" << endl;		
	}
	else {
		cout << "Nam" << nam << "khong phsi la nam nhuan" << endl;
	}
	return 0;
}