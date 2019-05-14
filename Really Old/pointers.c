#include<stdio.h>

int main(){
	
	int x;
	int* px = &x;
	*px = 5;
	
	printf("%d\n", *px);
	
	return 0;
}