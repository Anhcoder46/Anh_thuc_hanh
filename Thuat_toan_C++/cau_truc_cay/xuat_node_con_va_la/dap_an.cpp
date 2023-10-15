#include<iostream>
using namespace std;

// khai báo cấu trúc 1 cái node trong cây nhị phân tìm kiếm
struct node {
    int data; // dữ liệu chứa trong 1 cái node
    struct node *pLeft; // con trỏ liên kết với cái node bên trái <=> cây con trái
    struct node *pRight; // con trỏ liên kết với cái node bên phải <=> cây con phải

};
typedef struct node NODE;
typedef NODE* TREE;

// hàm khởi tạo cây nhị phân tìm kiếm
void KhoiTaoCay(TREE &t) {
    t = NULL;
}

// hàm thêm 1 cái phần tử vào cây
void ThemNodeVaoCay(TREE &t, int x) {
    // nếu cây rỗng
    if (t == NULL) {
        NODE *p = new NODE;
        p -> data = x;
        p -> pLeft = NULL;
        p -> pRight = NULL;
        t = p;
    }
    else {
        // nếu phần tử thêm vào mà nhỏ hơn nút gốc thì sẽ duyệt qua bên trái
        if (x < t -> data) {
            ThemNodeVaoCay(t->pLeft, x);
        }
        else if (x > t -> data) {
            ThemNodeVaoCay(t -> pRight, x);
        }
    }
}

// hàm xuất phần tử trong cây nhị phân tìm kiếm
void NLR(TREE t) {
    if (t != NULL) {
        // xử lí
        cout << t -> data << "  ";
        NLR(t -> pLeft);
        NLR(t -> pRight);
    }
}

// xuất các node có 2 con
void Node_Co_2_Con(TREE t) {
    if (t != NULL) {
        // xử lí
        if (t->pLeft != NULL && t->pRight != NULL) {// con trái và con phải có tồn tại phần tử
            cout << t->data << "  ";
        }
        Node_Co_2_Con(t->pLeft); // duyệt sang cây con trái của node hiện tại
        Node_Co_2_Con(t->pRight); // duyệt sang cây con phải của node hiện tại
    }
}

// xuất các node có 1 con
void Node_Co_1_Con(TREE t) {
	if(t -> pLeft == NULL && t -> pRight != NULL) {
            cout << t -> data << "  ";
    }
        Node_Co_1_Con(t -> pLeft); // duyệt sang cây con trái của node hiện tại
        Node_Co_1_Con(t -> pRight); // duyệt sang cây con phải của node hiện tại
}

// xuất các node lá
void Node_La(TREE t) {
    if(t != NULL) {
        // xử lí
        if(t -> pLeft == NULL && t -> pRight == NULL) {
        	cout << t -> data << "  ";
        }
        Node_La(t -> pLeft); // duyệt sang cây con trái của node hiện tại
        Node_La(t -> pRight); // duyệt sang cây con phải của node hiện tại
    }
}

// hàm nhập cây nhị phân tìm kiếm
void Menu(TREE &t) {
    int luachon;
    while(true) {
        cout << "\n\n\t\t ============ MENU ============";
        cout << "\n1. Nhap phan tu cho cay";
        cout << "\n2. Duyet cay";
        cout << "\n3. Node co hai con";
        cout << "\n4. Node co mot con";
        cout << "\n5. Node la";
        cout << "\n0. Thoat";
        cout << "\n\n\t\t =============  END  =============";
        cout << "\nNhap lua chon cua ban: ";
        cin >> luachon;
        if (luachon == 1) {
            int x;
            cout << "\nNhap gia tri: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2) {
            cout << "\nCay nhi phan tim kiem\n";
            NLR(t);
        }

        else if(luachon == 3) {
            cout << "\nNode co hai con: ";
            Node_Co_2_Con(t);
        }
        else if (luachon == 4) {
            cout << "\nNode co mot con: ";
            Node_Co_1_Con(t);
        }
        else if(luachon == 5) {
            cout << "\nNode la: ";
            Node_La(t);
        }
        else {
            break;
        }
    }
}

int main() {
    TREE t;
    KhoiTaoCay(t);
    Menu(t);
    return 0;
}