#include<iostream>
#include<string>
using namespace std;
int main() {
	cout << "Enter your full name: ";
	string strName;
	getline(cin, strName);
	cout << "Enter your age: ";
	int nAge;
	cin >> nAge;
	//xoa khoi bo nho dem 32767 ky tu, hoac den khi gap ky tu '\n'
	cin.ignore(32767, '\n');
	cout << "Hello, " << strName << endl;
	cout << "Your age " << nAge << endl;
	return 0;
}