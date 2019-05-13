#ifndef Linked_Lists_hpp
#define Linked_Lists.hpp
#include<iostream>
#include"Node.hpp"

using namespace std;

template<typename T>
class LL{
	private:
		int counter;
		Node<T>* head;
		Node<T>* tail;
	
	public:
		LL();
		~LL();
		
		void clear();
		void addHead(T);
		void addLast(T);
		void addMiddle(T);
		void printList();
};

template<typename T>
LL<T>::LL(){
	
	this->head = NULL:
	this->tail = NULL;
	this->counter = 0;
}

template<typename T>
LL<T>::~LL(){
	
	clear();	
}

template<typename T>
void LL<T>::clear(){
	
	if(head != NULL){
		
		Node<T>* hold = this->head;
		while(this->head != NULL){
			
			
			delete head;
			this->head->setNext(hold);
			
		}
	}
	
	else
		cout << "No nodes to clear" << endl;
}

template<typename T>
void LL<T>::addHead(){}

template<typename T>
void LL<T>::addLast(){}

template<typename T>
void LL<T>::addMiddle(){}

template<typename T>
void LL<T>::printList(){}

#endif