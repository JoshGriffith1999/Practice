#ifndef Queues_hpp
#define Queues_hpp
#include<iostream>
#include "Node.hpp"

using namespace std;
template<typename T>
class Queue{
	
	private:
		Node<T>* head;
		Node<T>* tail;
		int count;
	public:
		Queue();
		~Queue();
		
		void addQueue(T);
		void removeHead();
		void printQueue();
		void clear();
};

/*
Queue: Constructor function, sets head, tail, and count to defualt values
*/
template<typename T>
Queue<T>::Queue(){
	
	this->head = NULL;
	this->count = 0;
	
}

/*
~Queue: Deconstructor function, calls the clear function at the end of the objs time
*/
template<typename T>
Queue<T>::~Queue(){
	
	clear();
}

/*
addToQueue: adds a new node to the queue
*/
template<typename T>
void Queue<T>::addQueue(T value){
	
	Node<T>* myNode = new Node<T>(value);
	
	if(this->count == 0){
		
		this->head = myNode;
		this->tail = myNode;
	}
	
	else{
		this->tail->setNext(myNode);
		this->tail = myNode;
	}
	
	this->count++;
}

/*
removeHead: removes the head node from the queue, sets next node in the queue to be the new head
*/
template<typename T>
void Queue<T>::removeHead(){
	
	Node<T>* hold = this->head;
	
	delete this->head;
	
	this->head = hold->getNext();
	
	this->count--;
}

/*
printQueue: prints off all values in the queue
*/
template<typename T>
void Queue<T>::printQueue(){
	
	int i = 0;
	Node<T>* hold = this->head;
	
	for(i = 0; i < this->count; i++){
		
		cout << hold->getValue() << endl;
		
		hold = hold->getNext();
	}
	
	
}

/*
clear: removes all nodes from the list
*/
template<typename T>
void Queue<T>::clear(){
	
	int i = 0;
	
   if(this->count != 0){
	for(i = 0; i < this->count; i++){
		
		Node<T>* hold = this->head;
		
		delete this->head;
		
		this->head = hold->getNext();
		
	}
   }
   
   else
		cout << "Queue empty" << endl;
	
	this->count = 0;
}

#endif