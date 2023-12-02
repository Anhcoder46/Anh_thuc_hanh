/*
	Ngan x?p - Stack
*/
#include<iostream>
using namespace std;
typedef int infotype;

struct node {
	infotype data;
	node *next;
};

node *s;
void initS() {
	s = NULL;
}

bool fullS() {
	return false;
}

bool emptyS() {
	return s == NULL;
}

bool pushS(infotype x) {
	node *p;
	p = new node;
	p->data = x;
	p->next = NULL;
	if(emptyS()) {
		s = p;
	}
	else {
		p->next = s;
		s = p;
	}
	return true;
}

bool popS(infotype &x) {
	node *p = s;
	if(!emptyS()) {
		x = s->data;
		s = s->next;
		delete p;
		return true;
	}
	else {
		return false;
	}
}

bool peekS(infotype &x) {
	if(!emptyS()) {
		x = s->data;
		return true;
	}
	else {
		return false;
	}
}