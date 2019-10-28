#include<iostream>
#include"myMath.hpp"

#define SIZE 1000000
using namespace std;


int main(){
	
	int trueCount = 0;
	int falseCount = 0;
	
	for(unsigned int i = 0; i < SIZE; i++){
		
		if(isPrime(i) && isPrime(i + 3)){
			cout << i << "" << i + 3 << endl;
			trueCount++;
	}
		else{
			cout << i << ":" << "not prime"  << endl;
			falseCount++;
		}
	}
	
	
	cout << "number of false" << falseCount << "true count" << trueCount << endl;
	return 0;
}