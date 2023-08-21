#include<iostream>
#include<string>
using namespace std;
int main() {
	string str = "Xin12 cha3o";
	int count = 0;
	for(int i = 0; i <= str.size(); i++) {
		if(isdigit(str[i]))
		count++;
	}
	cout << "Number of digits: " << count << endl;
	return 0;
}