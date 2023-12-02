/*
	Hàng đợi - Queue
*/
#include<iostream>
using namespace std;
#define MAX 50
typedef int infotype;
infotype q[MAX];
int front;
int rear;

void initQ() {
	front = 0;
	rear = -1;
}

bool fullQ() {
	return rear == MAX - 1;
}

bool emptyQ() {
	return front > rear;
}

bool pushQ(infotype x) {
	if(!fullQ()) {
		rear++;
		q[rear] = x;
		return true;
	}
	else {
		return false;
	}
}

bool popQ(infotype &x) {
	if(!emptyQ()) {
		x = q[front];
		front++;
		return true;
	}
	else {
		return false;
	}
}

bool peekQ(infotype &x) {
	if(!emptyQ()) {
		x = q[front];
		return true;
	}
	else {
		return false;
	}
}
