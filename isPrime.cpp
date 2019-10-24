#include<iostream>
#define SIZE 1000000
using namespace std;


bool isPrime(int p){
	
	if(p % 2 != 0)
		return false;
	else if(p % 3 != 0)
		return false;
	else if(p % 5 != 0)
		return false;
	else if(p % 7 != 0)
		return false;
	else
		return true;
	
	
	
	
}

int main(){
	

	
	for(unsigned int i = 0; i < SIZE; i++){
		
		if(isPrime(i) && isPrime(i + 3))
			cout << i << "" << i + 3 << endl;
		else
			cout << "not prime"  << endl;
		
	}
	
	
	cout << "Hello mark" << endl;
	return 0;
}