/*
Josh Griffith
2/10/2017
A basic calculator with algebra and geometry functions
*/

#include<iostream>
#include"Math.h"

using namespace std;
int main(){
	
	//declaring test variable
	int test;
	
	//get user answer
	cout << "1. power 2. Sqaure 3. cube 4. Square Root 5. sin 6. cosin 7. tan" << endl;
	cout << "What mathmatical function do you want to ues? ";
	cin >> test;
	
	//Test users answer
	switch(test){
	case 1:{
		//declare variables desinated to this condition
		int base;
		int exponent;
		
		cout << "Enter a base ";
		cin >> base;
		cout << "Enter an expontent ";
		cin >> exponent;
		
		cout << "Final answer is " << power(base, exponent) << endl;
	} 
	break;
	
	case 2:{
		//declare variables desinated to this condition
		int num;
		
		cout << "Enter a number to sqaure ";
		cin >> num;
		
		cout << "Result is " << square(num) << endl;
	}
	break;
	
	case 3:{
		//declare variables desinated to this condition
		int num; 
		
		cout << "Enter a number to be cubed ";
		cin >> num;
		
		cout << "Final number is " << cube(num) << endl;
	}
	break;
	
	case 4:{
	//declare variables desinated to this condition
	
	float num;
	
	cout << "Enter a number to get the aquare root of ";
	cin >> num;
	
	cout << "final result is " << squareRoot(num) << endl;
	}
	break;
	
	case 5:{
	int o;
	int h;
	
	cout << "Enter your opposite side length" <<;
	cin >> o;
	
	cout << "Enter your hypotenuse" <<;
	cin >> h;
	
	}
	break;
	
	case 6:{}
	break;
	
	case 7:{}
	break; 
	
	
	default:{}
	break;}
	
	return 0;
}