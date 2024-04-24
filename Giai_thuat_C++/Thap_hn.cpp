#include<iostream>
using namespace std;
//Bài toán tháp Hà Nội
// Quy ước đặt tên 3 cột là A B C để tiện theo dõi. Yêu cầu bài toán là chuyển n chiếc đĩa từ cột A sang cột C
// Cách giải: 
// Đầu tiên ta lấy cột C làm cột trung gian. Chuyển n - 1 chiếc đĩa sang cột B
// Ta chuyển chiếc đĩa lớn nhất sang cột C
// Lấy cột A làm cột trung gian chuyển n - 1 chiếc đĩa từ cột B sang cột C
void chuyen(int n, char a, char c) {
	cout << "Chuyen dia thu " << n << " tu coc "<< a <<" sang coc "<< c << endl;
}
void thapHaNoi(int n, char a, char b, char c) {
    if (n == 1) {
    	chuyen(1, a, c);
	} else {
		thapHaNoi(n - 1, a, c, b); 
		chuyen(n, a, c);
		thapHaNoi(n - 1, b, a, c);
	}
}

int main() {
    int n;
    cout << "Nhap n: ";
	cin >> n;
    thapHaNoi(n, 'A', 'B', 'c');
    return 0;
}