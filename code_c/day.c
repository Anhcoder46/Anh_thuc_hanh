#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char s[100];
	fflush(stdin);
	gets(s);
	int i = 0, size = 0, j = 0;
	size = strlen(s);
	for(i = 0; i < size; i++) {
		if(isspace(s[i]) || isdigit(s[i])) {
		for(j = i; j < size; j++) {
			s[j] = s[j + 1];
			size--;
			s[size] = '\0';
			i--;
		}	
		}
	}
	puts(s);
	return 0;
}