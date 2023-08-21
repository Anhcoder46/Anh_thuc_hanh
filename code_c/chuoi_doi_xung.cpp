#include<iostream>
#include<string>
using namespace std;
int main() {
	string str = "ABCbA";
	int l = str .  size();
	bool ok = true;
	for(int i = 0; i <= l/2; i++) {
		if(str[i] != str[l - i - 1]) {
			ok = false;
			break;
		}
	}
	if(ok)
		cout << "Chuoi doi xung";
	else
		cout << "Khong doi xung";
	return 0;
}