#ifndef Binary_Trees_hpp
#define Binary_Trees_hpp
#include<iostream>
#define SIZE 100

template<typename T>
class tree{
	
	private:
		T tree[SIZE];
		void addChildHelper();
		void preOderPrintHelper();
		void postOrderPrintHelper();
		void inOrderPrintHelper();
		
		public:
		tree();
		~tree();
		
		void addChild(T);
		void preOderPrint();
		void postOrderPrint();
		void inOrderPrint();
		void search(T);
}

void tree<T>::addChildHelper(){}

void tree<T>::preOderPrintHelper(){}

void tree<T>::postOrderPrintHelper(){}

void tree<T>::inOrderPrintHelper(){}

tree<T>::tree(){}

tree<T>::~tree(){}

void tree<T>::addChild(T child){}

void tree<T>::preOderPrint(){}

void tree<T>::postOrderPrint(){}

void tree<T>::inOrderPrint(){}

void tree<T>::search(T){}
#endif