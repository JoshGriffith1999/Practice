/*
Belongs to he CurrencyConverter v2 program

each currency should be made out of a structure

*/
#ifndef CurrencyConverter_h
#define CurrencyConverter_h
#define OPTIONS 4
using namespace std;

typedef struct{
	
	float ToUsDollar;
	float ToCanDollar;
	float ToMexPeso;
	float ToEuropeEuro;
	
}currency_t;

//Dollar value order Goes US, Can, Mex, Euro
	currency_t UsDollar = {1,1.33,19.09,.88};
	currency_t CanDollar = {.75,1,14.39,.66};
	currency_t MexPeso = {.052,.069,1,.046};
	currency_t EuropeEuro = {1.14,1.51,21.69,1};
	//currency_t = {};
	
float ConvertFromUS(float start){
	
	int test = 0;
	
	cout << "1. Canadian Dollar 2. Mexican Peso 3. European Euro" << endl;
	
	
	do{
		cout << "Select a currency to convert to ";
		cin >> test;
		
	switch(test){
		
		case 1: return start *= UsDollar.ToCanDollar;
		break;
		case 2: return start *= UsDollar.ToMexPeso;
		break;
		case 3: return start *= UsDollar.ToEuropeEuro;
		break;
		
		default: cout << "Not a valid option" << endl;
		break;
	}
	}while(0 > test && test < OPTIONS);
}
float ConvertFromCan(float start){}
float ConvertFromMex(float start){}
float ConvertFromEuro(float start){}


#endif