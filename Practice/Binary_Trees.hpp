#ifndef Binary_Trees_hpp
#define Binary_Trees_hpp

#include<iostream>
#include "Node.hpp"

#define SIZE 100

template<typename T>
class tree{
	
	private:
		T tree[SIZE];
		void addChildHelper(int, T);
		void preOderPrintHelper(int);
		void postOrderPrintHelper(int);
		void inOrderPrintHelper(int pos);
		void searchHelper(int, T);
		
		public:
		tree();
		~tree();
		
		void addChild(T);
		void preOderPrint();
		void postOrderPrint();
		void inOrderPrint();
		void search(T);
};

template<typename T>
tree<T>::tree(){
	
	int i = 0;
	
	for(i = 0; i < SIZE; i++){
		
		this->tree[i] = 0;		
	}
	
}

template<typename T>
tree<T>::~tree(){
	
	int i = 0;
	
	for(i = 0; i < SIZE; i++){
		
		this->tree[i] = 0;		
	}
	
}

template<typename T>
void tree<T>::addChildHelper(int pos, T value){
	
	if(this->tree[pos] == 0)
		this->tree[pos] = value;
	
	else if(value < this->tree[pos])
		this->addChildHelper((2*pos)+1, value);
	
	else
		this->addChildHelper((2*pos)+2, value);
}

template<typename T>
void tree<T>::preOderPrintHelper(int pos){
	
	if(pos < SIZE && this->tree[pos] != 0){
		cout << this->tree[pos] << endl;
	
	this->preOderPrintHelper((2 * pos) + 1);
	this->preOderPrintHelper((2 * pos) + 2);
}
}

template<typename T>
void tree<T>::postOrderPrintHelper(int pos){
	
	if(pos < SIZE && this->tree[pos] != 0){
	
	this->preOderPrintHelper((2 * pos) + 1);
		cout << this->tree[pos] << endl;
		
	this->preOderPrintHelper((2 * pos) + 2);
		cout << this->tree[pos] << endl;
}
}

template<typename T>
void tree<T>::inOrderPrintHelper(int pos){
	
	if(pos < SIZE && this->tree[pos] != 0){
	
	this->preOderPrintHelper((2 * pos) + 1);
	this->preOderPrintHelper((2 * pos) + 2);
	
	cout << this->tree[pos] << endl;
}
template<typename T>
void tree<T>::searchHelper(int pos, T value){
	
	if(value == this->tree[pos])
		cout << "value found" << endl;
	
	else if(value < this->tree[pos])
		this->searchHelper((2*pos)+1, value);
	
	else
		this->searchHelper((2*pos)+2, value);
}

template<typename T>
void tree<T>::addChild(T child){
	
	this->addChildHelper(0,child);
}

template<typename T>
void tree<T>::preOderPrint(){
	
	this->preOderPrintHelper(o)
}

template<typename T>
void tree<T>::postOrderPrint(){
	
	this->postOrderPrintHelper(0);
}

template<typename T>
void tree<T>::inOrderPrint(){
	
	this->inOrderPrintHelper(0);
}

template<typename T>
void tree<T>::search(T value){
	
	this->searchHelper(0, value);
}
#endif