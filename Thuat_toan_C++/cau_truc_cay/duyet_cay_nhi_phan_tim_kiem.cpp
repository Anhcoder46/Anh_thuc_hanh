#include<iostream>
using namespace std;

// khai báo cấu trúc  1 cái node
struct node {
    int data; // dữ liệu của node ==> dữ liệu mà node sẽ lưu trữ
    struct node *pLeft; // node liên kết bên trái của cây <=> cây con trái
    struct node *pRight; // node liên kết bên phải của cây <=> cây con phải
};
typedef struct node NODE;
typedef NODE* TREE;

// khởi tạo cây
void KhoiTaoCay(TREE &t) {
    t = NULL; // cây rỗng
}

// hàm thêm phần tử x vào cây nhị phân
void ThemNodeVaoCay(TREE &t, int x) {
    // nếu cây rỗng
    if (t == NULL) {
        NODE *p = new NODE; // khởi tạo 1 cái node để thêm vào cây
        p -> data = x;// thêm dữ liệu x vào data
        p -> pLeft = NULL;
        p -> pRight = NULL;
        t = p;// node p chính là node gốc <=> x chính là node gốc
    }
    else {// cây có tồn tại phần tử
        // nếu phần tử thêm vào mà nhỏ hơn node gốc ==> thêm nó vào bên trái
        if (t -> data > x) {
            ThemNodeVaoCay(t -> pLeft, x); // duyệt qua trái để thêm phần tử x
        }
        else if (t -> data < x) {// nếu phần tử thêm vào mà lớn hơn node gốc ==> thêm nó vào bên phải
            ThemNodeVaoCay(t->pRight, x); // duyệt qua phải để thêm phần tử x
        }
    }
}

// hàm xuất cây nhị phân theo NLR
void Duyet_NLR(TREE t) {
    // nếu cây còn phần tử thì tiếp tục duyệt
    if (t != NULL) {
        cout << t -> data << " "; // xuất dữ liệu trong node
        Duyet_NLR(t -> pLeft); // duyệt qua trái
        Duyet_NLR(t -> pRight); // duyệt qua phải
	}
}

// hàm xuất cây nhị phân theo NRL
void Duyet_NRL(TREE t) {
    // nếu cây còn phần tử thì tiếp tục duyệt
    if (t != NULL) {
        cout << t->data << " "; // xuất dữ liệu trong node
        Duyet_NRL(t->pRight); // duyệt qua phải
        Duyet_NRL(t->pLeft); // duyệt qua trái
    }
}

// hàm xuất cây nhị phân theo LNR <=> xuất ra các phần tử từ bé đến lớn
void Duyet_LNR(TREE t) {
    // nếu cây còn phần tử thì tiếp tục duyệt
    if (t != NULL) {
        Duyet_LNR(t -> pLeft); // duyệt qua trái
		if(luachon > 7) {
            cout << "\nLua chon khong hop le";
        }
        else if (luachon == 1) {
            int x;
            cout << "\nNhap so nguyen x: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2) {
            cout << "\nDuyet cay theo NLR\n";
            Duyet_NLR(t);
        }
        else if (luachon == 3) {
            cout << "\nDuyệt cây theo NRL\n";
            Duyet_NRL(t);
        }
        else if (luachon == 4) {
            cout << "\nDuyet cay theo LNR\n";
            Duyet_LNR(t);
        }
        else if (luachon == 5) {
            cout << "\nDuyệt cây theo RNL\n";
            Duyet_RNL(t);
        }
        else if (luachon == 6) {
            cout << "\nDuyet cay theo LRN\n";
            Duyet_LRN(t);
        }
        else if (luachon == 7) {
            cout << "\nDuyet cay theo RLN\n";
            Duyet_RLN(t);
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