#include<bits/stdc++.h>
using namespace std;
//Tìm kiếm bằng bảng băm (Hashing): Dựa vào hàm băm để xác định vị trí của phần tử cần tìm trong bảng băm. Tìm kiếm này có độ phức tạp O(1) trung bình.

int main() {
 	unordered_map<int, string> hashTable;
		hashTable[1] = "One";
		hashTable[2] = "Two";
		hashTable[3] = "Three";
		
	 	int keyToSearch = 2;
	 	auto it = hashTable.find(keyToSearch);
	 	if(it != hashTable.end()) {
	 		cout << "Key found! value = " << it -> second;
	 	}
	 	else {
	 		cout << "Key not found!";
	 	}
	 return 0;
 }