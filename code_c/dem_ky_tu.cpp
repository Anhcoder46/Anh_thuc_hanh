//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string s = " ";
//	getline(cin, s);
//	// do dai s
//	int l  = 0;
//	while(s[l] != '\0') {
//		l++;
//	}
//	cout << l;
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool appeared[256] = { false };  // mảng đánh dấu các kí tự đã xuất hiện
    int count = 0;  // biến đếm số lượng kí tự khác nhau

    for (int i = 0; i < s.length(); i++) {
        if (!appeared[(int)s[i]]) {  // nếu kí tự chưa xuất hiện
            appeared[(int)s[i]] = true;  // đánh dấu kí tự đã xuất hiện
            count++;  // tăng biến đếm
        }
    }

    cout << count;

    return 0;
}