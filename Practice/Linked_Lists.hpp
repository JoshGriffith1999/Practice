#ifndef Linked_Lists_hpp
#define Linked_Lists_hpp
#include<iostream>
#include"Node.hpp"

using namespace std;

template<typename T>
class LL{
	private:
		int count = 0;
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
	
	this->head = NULL;
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
void LL<T>::addHead(T value){
	
	Node<T>* obj = new makeNode<T>(value, NULL, NULL);
	
	if(count == 0){
		
		this->head = obj;
		this->tail = obj;
		count++;	
	}
	
	else
		obj->setNext(this->head);
		this->head = obj;
		this->count++;
}

template<typename T>
void LL<T>::addLast(T value){
	
	
	ode<T>* obj = new makeNode<T>(value, NULL, NULL);
	
	if(count == 0){
		
		this->head = obj;
		this->tail = obj;
		this->count++;	
	}
	
	else
		obj->setPrev(this->tail);
	this->tail = obj;
}

template<typename T>
void LL<T>::addMiddle(T value){}

template<typename T>
void LL<T>::printList(){
	
	Node<T>* hold = this->head;
	
	while(hold->getNext() != NULL){
		
		cout << hold->getValue() << endl;
		hold = hold->getValue();
	}
	
}

#endif