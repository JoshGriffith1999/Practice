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
		void addMiddle(T, int);
		void printList(bool);
};

/*
constructor - sets defualt values to the head, tail, and count pointer/variables
*/
template<typename T>
LL<T>::LL(){
	
	this->head = NULL;
	this->tail = NULL;
	this->count = 0;
}

/*
deconstructor - calls the clear function at the end
*/
template<typename T>
LL<T>::~LL(){
	
	clear();	
}

/*
clear function - clears all nodes from the list
*/
template<typename T>
void LL<T>::clear(){
	
	if(head != NULL){
		int i = 1;
		Node<T>* hold = this->head;
		for(i = 1; i <= count; i++){
			
			
			delete head;
			this->head->setNext(hold);
			
		}
	}
	
	else
		cout << "No nodes to clear" << endl;
}

/*
adds new node to the head of the list
requires value being added to the list
*/
template<typename T>
void LL<T>::addHead(T value){
	
	Node<T>* obj = new Node<T>(value);
	
	if(count == 0){
		
		this->head = obj;
		this->tail = obj;
		count++;	
	}
	
	else
		obj->setNext(this->head);
		this->head->setPrev(obj);
		this->head = obj;
		this->count++;
		
	this->head->setPrev(this->tail);
}

/*
adds new node to the tail of the list
requires value being added to the list
*/
template<typename T>
void LL<T>::addLast(T value){
	
	
	Node<T>* obj = new Node<T>(value);
	
	if(count == 0){
		
		this->head = obj;
		this->tail = obj;
		this->count++;	
	}
	
	else
		obj->setPrev(this->tail);
		this->tail->setNext(obj);
		this->tail = obj;
		this->count++;
		
	this->tail->setNext(this->head);
}

/*
adds new node to the middle of the list
requires value being added to the list and the location being added to
*/
template<typename T>
void LL<T>::addMiddle(T value, int location){
	
	Node<T>* obj = new Node<T>(value);
	Node<T>* walker = this->head;
	int i = 1;
	
	for(i = 1; i < location - 1; i++){
		
		walker = walker->getNext();
		}
		
	obj->setNext(walker->getNext());
	obj->setPrev(walker);
	walker->setNext(obj);
		
	this->count++;
}

/*
prints the list, each entry on a new line
0 = a forward search, 1 = backwards search
*/
template<typename T>
void LL<T>::printList(bool way){
	
	if(way == 0){
		Node<T>* hold = this->head;
		int i = 0;
	
		for(i = 1; i <= count; i++){
		
			cout << hold->getValue() << endl;
			hold = hold->getNext();
		}
	}
	
	else{
		Node<T>* hold = this->tail;
		int i = 0;
	
		for(i = 1; i <= count; i++){
		
			cout << hold->getValue() << endl;
			hold = hold->getPrev();
		}
		
	}
}

#endif