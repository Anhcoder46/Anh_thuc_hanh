#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	char ky_tu{'a'};//97
	cin >> ky_tu;
	if(ky_tu >= 97 && ky_tu <= 122) {
		cout << "In thuong";
	}
	else if(ky_tu >= 65 && ky_tu <= 90) {
		cout << "In hoa";
	}
	else if(ky_tu >= 37 && ky_tu <= 48) {
		cout << "so";
	}
	else
		cout << "Ky tu dac biet";
	return 0;
}