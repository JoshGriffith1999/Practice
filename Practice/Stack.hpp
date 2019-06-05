#ifndef Stack_hpp
#define Stack_hpp
#include<iostream>
#include "Node.hpp"

//using namespace std;


template<typename T>
class Stack{
	private:
		Node<T>* head;
		//Node<T>* tail;
		int count;
		
	public:
		Stack();
		~Stack();
		
		void addStack(T);
		Node<T> seeStack();
		void removeHead();
		void clear();
		
};
/*
constructor function, used to set defualt staring values to the head, tail and count variables
*/
template<typename T>
Stack<T>::Stack(){
	
	this->head = NULL;
	//this->tail = NULL;
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
	
	myNode->getNext(head);
	this-head = myNode;
	
	this->count++;
}

/*
seeStack: shows the value of each new in the stack
*/
template<typename T>
Node<T> Stack<T>::seeStack(){
	
	int i = 0;
	Node<T>* walker = this->head;
	
	for(i = 0; i < count; i++){
		
			cout << walker->getValue() << endl;
		
		walker = walker->getNext();
	}
}

/*
removeHead: removes the head node and sets the next node in the stack to be the next node
*/
template<typename T>
void Stack<T>::removeHead(){
	
	
}

#endif