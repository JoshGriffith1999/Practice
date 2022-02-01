/*
	Currency converter version 2
put everything into a header file to ease the main file

*/
#include<iostream>
#include "CurrencyConverter.hpp"
#define OPTION 5
using namespace std;

int main(void){
	
	int test = 0;
	float start = 0;
	float finish = 0;
	
	cout << "1. US Dollar 2. Canadian Dollar 3. Mexican Peso 4. European Peso" << endl;
	
	
	
	do{
		cout << "select an option from above as you starting currency type ";
		cin >> test;
		cout << "How much do you have? ";
		cin >> start;
		
	switch(test){
		
		case 1: finish = ConvertFromUS(start);
		break;
		case 2: finish = ConvertFromCan(start);
		break;
		case 3: finish = ConvertFromMex(start);
		break;
		case 4: finish = ConvertFromEuro(start);
		break;
		
		default: cout << "Not a valid option" << endl;
		break;
	}
	}while(0 > test && test < OPTION);
	
	cout << "You know have " << finish << endl;
	return 0;
}