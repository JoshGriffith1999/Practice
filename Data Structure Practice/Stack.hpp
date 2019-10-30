#ifndef Stack_hpp
#define Stack_hpp
#include<iostream>
#include "Node.hpp"
using namespace std;

template<typename T>
class Stack{
	private:
		Node<T>* head;
		int count;
		
	public:
		Stack();
		~Stack();
		
		void addStack(T);
		void seeStack();
		void removeHead();
		void clear();
		
};
/*
constructor function, used to set defualt staring values to the head, tail and count variables
*/
template<typename T>
Stack<T>::Stack(){
	
	this->head = NULL;
	this->count = 0;
}
template<typename T>

/*
deconstructor function, used to call the clear function at the end of the program
*/
Stack<T>::~Stack(){
	
	clear();
}

/*
Adds new new to the stack
Value: value stored in the node in the stack
*/
template<typename T>
void Stack<T>::addStack(T value){
	
	Node<T>* myNode = new Node<T>(value);
	
	myNode->setNext(this->head);
	this->head = myNode;
	
	this->count++;
}

/*
seeStack: shows the value of each new in the stack
*/
template<typename T>
void Stack<T>::seeStack(){
	
	int i = 0;
	Node<T>* walker = this->head;
	
	for(i = 0; i <= count; i++){
		
			cout << walker->getValue() << endl;
		
		walker = walker->getNext();
	}
}

/*
removeHead: removes the head node and sets the next node in the stack to be the next node
*/
template<typename T>
void Stack<T>::removeHead(){
	
	Node<T>* walker = this->head;
	
	this->head = this->head->getNext();
	
	delete walker;
	
	this->count--;
}

/*
clear: empties the stack of all nodes
*/
template<typename T>
void Stack<T>::clear(){
	
	int i = 0;
	Node<T>* node = this->head;
	
	for(i = 0; i < count; i++){
		
		this->head = this->head->getNext();
		
		delete node;
	}
}

#endif