#include<iostream>
using namespace std;

/* khai báo Node */
struct node {
	int data;
	struct node *pNext;
};
typedef struct node NODE;

/* khai báo c?u trúc của Stack */
struct stack {
	NODE *pTop; // con trỏ quản lý đầu stack
};
typedef struct stack STACK;

/* hàm khởi tạo Stack */
void KhoiTaoStack(STACK &s) {
	s.pTop = NULL;
}

/* hàm khởi tạo 1 cái node */
NODE *KhoiTaoNode(int x) {
	//tạo mới 1 NODE
	NODE *p = new NODE();
	if (p == NULL) {
		cout << "\nKhong du bo nho de cap phat!";
		return NULL;
	}

	// đưa dữ liệu của biến x vào trong cái data của node p
	p -> data = x;
	p -> pNext = NULL;
	return p;
}

/* hàm kiểm tra Stack rỗng*/
bool IsEmpty(STACK s) {
	// nếu stack rỗng
	if (s.pTop == NULL) {
		return false;
	}
	return true;
}

/* thêm phần tử vào danh sách Stack (top)*/
bool Push(STACK &s, NODE *p) {
	// node p đang rỗng
	if(p == NULL) {
		return false;
	}
	
	// nếu danh sách rỗng
	if(IsEmpty(s) == false) {
		// node p cung chính là node pTop <=>chính là node đầu stack
		s.pTop = p;
	}
	else {
		// B1: cho con trỏ của node p trỏ đến node pTop
		p -> pNext = s.pTop;

		// B2: cập nhật lại node đầu chính là node p
		s.pTop = p;
	}
	// thêm thành công
	return true;
}

/* lấy phần tử đầu danh sách và hủy nó đi */
bool Pop(STACK &s, int &x) {// x chính là giá trị cần lấy ra 
	//nếu danh sách rỗng
	if (IsEmpty(s) == false) {
		// lấy thất bại <=> danh sách đang rỗng
		return false;
	}
	
	// gán node đầu danh sách vào node p <=> node p chính là node mà tí nữa ta sẽ xóa nó
	NODE *p = s.pTop;

	// cập nhật lại node đầu
	s.pTop = s.pTop -> pNext;

	// lấy giá trị của node đầu ra gán vào biến x
	x = p -> data;
	
	// lấy phần tử thành công
	return true;
}

/* Xem thông tin của node đầu danh sách */
bool Top(STACK s, int &x) {
// x chính là giá trị cần xem 
	// nếu danh sách rỗng
	if (IsEmpty(s) == false) {
		return false;
	}
	x = s.pTop -> data;
	return true;
}

/* hàm thêm dữ liệu vào Stack */
void getData(STACK &s, int x) {
	//tạo 1 node p để lưu giá trị của x vào
	NODE *p = KhoiTaoNode(x);
	// thêm node p vào stack
	Push(s, p);
}

/* hàm kiểm tra số nguyên tố */
bool ktSoNT(int n) {
	// nếu n < 2 thì không phải là số nguyên tó
	if (n < 2) {
		return false;
	}

	// ngược lại nếu n >= 2 thì ta xét điều kiện số nguyên tố
	for (int i = 2; i < (n - 1); i++) {
		//nếu chia hết cho i thì không phải là số nguyên tố
		if (n % i == 0) {
			return false;
		}
	}
	//ngược lại là số nguyên tố
	return true;
}

/* hàm xuất các số nguyên tố ra màn hình */
void XuatSoNguyenTo(STACK &s) {
	while (IsEmpty(s) == true) {
		int x;
		Pop(s, x);
		//nếu x là số nguyên tố thì ta xuất ra màn hình
		if (ktSoNT(x)) {
			cout << x << "\t";
		}
	}
}

int main() {
	STACK s;
	KhoiTaoStack(s);
	int x;
	while(1) {
		cout<<"Nhap vao so ban muon them vao Stack, Nhap -1 de thoat!: ";
		cin >> x;
		getData(s, x);
		if(x == -1) break;
	}
	cout << "\nCac so nguyen to trong Stack la: \n";
	XuatSoNguyenTo(s);
	cout << endl;
	return 0;
}