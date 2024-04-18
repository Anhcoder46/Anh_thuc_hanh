#include<iostream>
using namespace std;
//Bài toán tháp Hà Nội
// Quy ước đặt tên 3 cột là A B C để tiện theo dõi. Yêu cầu bài toán là chuyển n chiếc đĩa từ cột A sang cột C
// Cách giải: 
// Đầu tiên ta lấy cột C làm cột trung gian. Chuyển n - 1 chiếc đĩa sang cột B
// Ta chuyển chiếc đĩa lớn nhất sang cột C
// Lấy cột A làm cột trung gian chuyển n - 1 chiếc đĩa từ cột B sang cột C
void haNoi(int n, char cotChinh, char cotPhu, char cotDich) {
	if(n == 1) {
		cout << "Di chuyen dia " << n << " tu " << cotChinh << " sang " << cotDich << endl;
		return;
	}
	haNoi(n - 1, cotChinh, cotDich, cotPhu);
	cout << "Di chuyen dia " << n << " tu " << cotChinh << " sang " << cotDich << endl;
	haNoi(n - 1, cotPhu, cotChinh, cotDich);
}

int main() {
	int n;
	cout << "Nhap so luong dia: ";
	cin >> n;
	haNoi(n, 'A', 'B', 'C');
	return 0;
}