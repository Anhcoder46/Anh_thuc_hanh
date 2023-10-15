#include<iostream>
using namespace std;

// Khai báo cấu trúc 1 node trong cây nhị phân tìm kiếm
struct node {
	int data; // Dữ liệu chứa trong 1 cái node
	struct node *pLeft; // Con trỏ liên kết với cái node bên trái <=> cây con trái	
	struct node *pRight; // Con trỏ liên kết với cái node bên phải <=> cây con phải
};
typedef struct node NODE;
typedef NODE* TREE;

// Hàm khởi tạo cây nhị phân tìm kiếm
void KhoiTaoCay(TREE &t) {
	t = NULL;
}

// Hàm thêm 1 cái phần tử vào cây
void ThemNodeVaoCay(TREE &t, int x) {
	// Nếu cây rỗng
	if(t == NULL) {
		NODE *p = new NODE;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	} else {
		// Nếu phần tử thêm vào mà nhỏ hơn nút gốc thì sẽ duyệt qua bên trái
		if(x < t->data) {
			ThemNodeVaoCay(t->pLeft, x);
		} else if(x > t->data) {
			ThemNodeVaoCay(t->pRight, x);
		}
	}
}

// Hàm xuất phần tử trong cây nhị phân tìm kiếm
void NLR(TREE t) {
	if(t != NULL) {
		// Xử lý
		cout << t->data << " ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

// Hàm tìm giá trị max
int TimMax(TREE t) {
	// Nếu node cha mà không tồn tại cây con phải - thì node cha này là node ngoài cùng nhất của cây con
	if(t->pRight == NULL) {
		return t->data;
	}
	return TimMax(t->pRight); // Duyệt đến node cuối cùng nhất bên cây con phải -> để tìm giá trị lớn nhất
}

// Hàm tìm giá trị min
int TimMin(TREE t) {
	// Nếu node cha mà không tồn tại cây con trái - thì node cha này là node ngoài cùng nhất của cây con
	if(t->pLeft == NULL) {
		return t->data;
	}
	return TimMin(t->pLeft); // Duyệt đến node cuối cùng nhất bên cây con trái -> để tìm giá trị nhỏ nhất
}

// Hàm nhập cây nhị phân tìm kiếm
void Menu(TREE &t) {
    int luachon;
    while (true) {
        cout << "1. Nhap phan tu cho cay\n";
        cout << "2. Duyet cay\n";
        cout << "3. Gia tri max\n";
        cout << "4. Gia tri min\n";
        cout << "0. Thoat\n";

        cout << "\nNhap lua chon cua ban: ";
        cin >> luachon;

        if (luachon == 1) {
            int x;
            cout << "\nNhap gia tri: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        } else if (luachon == 2) {
            cout << "\nCay nhi phan tim kiem: ";
            NLR(t);
            cout << endl;
        } else if (luachon == 3) {
            if (t != NULL) {
                int max = TimMax(t);
                cout << "\nGia tri max: " << max << endl;
            } else {
                cout << "\nCay khong ton tai\n";
            }
        } else if (luachon == 4) {
            if (t != NULL) {
                int min = TimMin(t);
                cout << "\nGia tri min: " << min << endl;
            } else {
                cout << "\nCay khong ton tai\n";
            }
        } else {
            break;
        }
    }
}

int main() {
	TREE t;
	KhoiTaoCay(t);
	Menu(t);
}