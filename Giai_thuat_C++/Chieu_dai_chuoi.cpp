#include<iostream>
#include<string>
using namespace std; 
// Viết hàm đệ quy xác định chiều dài chuỗi
int doDai(char s[], int dem) {
    if (s[dem] != '\0') {
        return doDai(s, dem + 1);
    } else {
        return dem;
    }
}

int main() {
	char s[1000];
	int dem = 0;
	cout << "Nhap chuoi: ";
	cin.getline(s, 1000); 
	cout << "Do dai xau s la: " << doDai(s, 0);
}