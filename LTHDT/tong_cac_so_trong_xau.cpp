#include<iostream>
#include<string>
//Tổng các số trong xâu
using namespace std;
int main() {
	string s;
	int sum = 0;
	getline(cin, s);
	for(int i= 0; i < s.length(); i++) {
		if(isdigit(s[i])) {
			int n = 0;
			while(isdigit(s[i])) {
				n = n * 10 + (s[i] - '0');
				i++;
			}
			sum += n;
		}
	}
	cout << sum << endl;
	return 0;
}