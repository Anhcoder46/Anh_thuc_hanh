/*
	Ngan x?p - Stack
*/
#include<iostream>
using namespace std;
#define MAX 50
typedef int infotype;
infotype s[MAX];
int index;

void initS() {
	index = -1;
}

bool fullS() {
	return (index == MAX - 1);	
}

bool emptyS() {
	return index == -1;
}

bool pushS(infotype x) {
	if(!fullS()) {
		index++;
		s[index] = x;
		return true;
	}		
	else {
		return false;
	}
}

bool popS(infotype &x) {
    if (!emptyS()) {
        x = s[index];
        index--;
        return true;
    } 
	else {
        return false;
    }
}
