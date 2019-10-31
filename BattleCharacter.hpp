#ifndef BattleCharacter_H
#define BattleCharacter_H
#include<iostream>
using namespace std;

template<typename T>
class avatar{
	
	private:
		T health = 0;
		T magicPower = 0;
		T armour = 0;
		T strength = 0;
		
	public:
	
	//Constructors and deconstructors
	avatar();
	avatar(T,T,T,T);
	~avatar();
	
	//Getter Functions
	T getHealth();
	T getMagicPower();
	T getArmour();
	T getStrength();
	
	//Setter functions
	void setHealth(T);
	void setMagicPower(T);
	void setArmour(T);
	void setStrength(T);
};

template<typename T>
avatar<T>::avatar(){
	
	this -> health = 0;
	this -> magicPower = 0;
	this -> armour = 0;
	this -> strength = 0;
	
	cout << "Constructor #1" << endl;
}
template<typename T>
avatar<T>::avatar(T h, T mp, T a, T s){
		this -> health = h;
	this -> magicPower = mp;
	this -> armour = a;
	this -> strength = s;
	
	cout << "Constructor 2" << endl;
}
template<typename T>
avatar<T>::~avatar(){
	
	cout << "De-constructor" << endl;
	
}

template<typename T>
void avatar<T>::setHealth(T x){
	
	this->health = x;
}
template<typename T>
void avatar<T>::setMagicPower(T x){
	
	this->magicPower = x;
}
template<typename T>
void avatar<T>::setArmour(T x){
	
	this->armour = x;
}
template<typename T>
void avatar<T>::setStrength(T x){
	
	this->strength = x;
}

template<typename T>
T avatar<T>::getHealth(){
	
	return this->health;
}
template<typename T>
T avatar<T>::getMagicPower(){
	
	return this->magicPower;
}
template<typename T>
T avatar<T>::getArmour(){
	
	return this->armour;
}
template<typename T>
T avatar<T>::getStrength(){
	
	return this->strength;
}


#endif