#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	int a = n % 10;
	int b = (n / 10) % 10;
	if(n < 10 || n > 99){
    	printf("Nhap vao so co hai chu so ");
	}
	else{
	switch(b){
    	case 1: printf("muoi ");
		break;
    	case 2: printf("hai muoi ");
		break;
    	case 3: printf("ba muoi ");
		break;
    	case 4: printf("bon muoi ");
		break;
    	case 5: printf("nam muoi ");
		break;
    	case 6: printf("sau muoi ");
		break;
    	case 7: printf("bay muoi ");
		break;
    	case 8: printf("tam muoi ");
		break;
    	case 9: printf("chin muoi ");
		break;
    }
	switch(a){
    	case 1:if(b == 1){
			printf("motj ");
		}
    	else {
    		printf("mots");
		}
		break;
    	case 2: printf("hai ");
		break;
    	case 3: printf("ba ");
		break;
    	case 4: if(b == 1){
			printf("bon");
		}
    	else {
    		printf("tu");
		}
		break;
    	case 5: printf("lam ");
		break;
    	case 6: printf("sau ");
		break;
    	case 7: printf("bay ");
		break;
    	case 8: printf("tam ");
		break;
    	case 9: printf("chin ");
		break;
    }
}
    return 0;
}
