#include<iostream>

using namespace std;

int hammering(char x[], char y[]){
	
	unsigned int k = 0;
	unsigned int notEquaL = 0;
	
	while(k < 100000000){
		
		if(x[k] != y[k])
			notEquaL++;
		k++;
	}
	return notEquaL;
	
}

int main(){
	
	char string1[] = "123";
	char string2[] = "456";
	int a = hammering(string1, string2);
	
	cout << a << endl;
	
	return 0;
}