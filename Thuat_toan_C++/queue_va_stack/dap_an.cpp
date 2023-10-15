#include<iostream>
/* kh?i t?o bi?n toàn c?c m */
#define m 100
using namespace std;

/* kh?i t?o c?u trúc Stack s? d?ng m?ng*/
struct stack {
	int data[m];
	int top;
};

/* kh?i t?o c?u trúc Queue s? d?ng danh sách liên k?t */
struct Queue {
	int Head,Tail;
	int Data[m];
};

/* hàm thêm ph?n t? vào Stack */
void Push(stack &a, int c) {
	if(a.top == m - 1) {
		cout<<"\n Ngan xep Stack rong!";
		exit(0);
	} else {
		a.data[++a.top] = c;
	}
}

/* hàm xóa phan tu khoi Stack */
int Pop(stack &a) {
	if(a.top == -1) {
		cout<<"\n Ngan xep Stack rong!";
		return 0;
	} else {
		return a.data[a.top--];
	}
}

/* hàm thêm phan tu vào trong Queue */
void PushQ(Queue &q, int x) {
	int vt;
	vt = (q.Tail + 1) % m;
	if(vt == q.Head) {
		cout << "\n Hang doi da day!";
		exit(1);
	} else {
		q.Data[vt] = x;
		q.Tail = vt;
	}
}

/* hàm kiem tra hàng doi rong */
int IsEmpty(Queue &q) {
	return (q.Head == q.Tail? 1 : 0);
}

/* hàm xóa phan tu khoi hàng doi */
int PopQ(Queue &q) {
	int vt;
	int iteam;
	while(!IsEmpty(q)) {
		vt = (q.Head + 1) % m;
		iteam = q.Data[vt];
		q.Head = vt;
		return iteam;
	}
	return -1;
}

/* hàm dua phan tu vào Stack và Queue theo yêu cau cua bài toán so chan vào Stakc và so le vào Queue */
void Input(Queue &q, stack &p) {
	int x;
	while(1) {
		cout << "\n Nhap gia tri x, nhap -1 de thoat: ";
		cin >> x;
		if(x == -1) break;
		if(x % 2 == 1) {
			PushQ(q, x);
		} else {
			Push(p, x);
		}
	}
}

/* hàm in các phan tu trong Queue và Stack */
void Print(Queue &q, stack &p) {
	cout<<"Danh sach ngan xep Stack (cac so chan): " << "\n";
	while(p.top != -1) {
		cout << Pop(p) << " ";
	}
	cout << "\n";
	int t = PopQ(q);
	cout << "Danh sach hang doi Queue (cac so le): " << "\n";
	while(t != -1) {
		cout << t << " ";
		t = PopQ(q);
	}
	cout << "\n";

}

/* hàm main d? g?i các hàm dã vi?t */
int main() {
	stack p;
	Queue q;
	p.top = -1;
	q.Head = q.Tail = 0;
	Input(q, p);
	Print(q, p);
}