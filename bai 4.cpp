#include <stdio.h>

int main(){
	char y;
	
	printf("nhap ky tu: ");
	do{
		scanf("%c" ,&y);
	}while(y != 'Y' && y != 'y' && y != 'n' && y != 'N');
	
	printf("Ban da nhap dung");
 }
