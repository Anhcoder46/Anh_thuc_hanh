#include<bits/stdc++.h>
//lọc số nguyên tố trong xâu
using namespace std;
int kiemTra(int n) {
	if(n <= 1)
	return 0;
	else for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0)
		return 0;
	}
	return 1;
}
int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++) {
		int n = 0;
		while(isdigit(s[i])) {
			n = n * 10 + s[i] - '0';
			i++;
		}
		if(kiemTra(n) == 1)
		cout << n << endl;
	}
	return 0;
}