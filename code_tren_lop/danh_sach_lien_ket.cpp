/*
	Danh sách liên kết
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
struct node{
	int data;
	node* next;
};
//khởi tạo DSLK
void initL(node* &list) {
	list=NULL;
}
//tạo Node
node* creatNode() {
	node* p= NULL;
	p = new node;
	p->data=rand()%100;
	p->next = NULL;
	return p;
}
//nhap vao dslk
void inputL(node* &list) {
	node* tmp=list;
	char c='a';
	srand((int) time(0));
	do {
		node* p =creatNode();
		cout << p->data<<endl;
		if(list==NULL)
			list=p;
		else
			tmp->next=p;
		tmp=p;
		cin>>c;
	} while(c!='#');
}
//In dslk
void outputL(node* list) {
	node* tmp;
	tmp=list;
	while(tmp!=NULL) {
		cout<<tmp->data<<"; ";
		tmp=tmp->next;
	}
}
// Tính tổng DSLK
int sumL(node* list) {
	node* tmp=list;
	int s=0;
	while(tmp!=NULL) {
		s=s + tmp->data;
		tmp=tmp->next;
	}
	return s;
}
// In min trong danh sach lien ket
node* minL(node* list) {
    node* minNode = list;
    node* tmp = list->next;
    while (tmp != NULL) {
        if (tmp->data < minNode->data) {
            minNode = tmp;
        }
        tmp = tmp->next;
    }
    return minNode;
}

// In max trong danh sach lien ket
node* maxL(node* list) {
    node* maxNode = list;
    node* tmp = list->next;
    while (tmp != NULL) {
        if (tmp->data > maxNode->data) {
            maxNode = tmp;
        }
        tmp = tmp->next;
    }
    return maxNode;
}

int main() {
	node* list = NULL;
	initL(list);
	inputL(list);
	//in ra dslk
	outputL(list);
	//tính tổng phần tử trong dslk
	cout << endl << "S = " << sumL(list) << endl;
	// Tim Min, max phan tu trong dslk
	cout << "Min = " << minL(list)->data << endl;
   	cout << "Max = " << maxL(list)->data << endl;
   	return 0;
}