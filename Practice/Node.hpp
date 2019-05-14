#ifndef Node_HPP
#define Node_HPP
#include<iostream>


template<typename T>
class Node{
	
	private:
		T data;
		Node<T>* next;
		Node<T>* prev;
		void makeNode(T, Node<T>*, Node<T>*);
		 
	public:
		T getValue();
		Node<T>* getNext();
		Node<T>* getPrev();
		Node<T> Node(T);
		
		void setValue(T);
		void setPrev(Node<T>*);
		void setNext(Node<T>*);
	
			
};

template<typename T>
T Node<T>::getValue(){
	
	return this->data;
	
}

template<typename T>

Node<T>* Node<T>::getNext(){
	
	return this->next;
}

template<typename T>
Node<T>* Node<T>::getPrev(){
	
	return this->prev;
}

template<typename T>
Node<T> Node<T>::Node(T value){
	
	this->makeNode(value, NULL,NULL)
}

template<typename T>
void Node<T>::setValue(T x){

		this->data = x;
}

template<typename T>
void Node<T>::setNext(Node<T>* x){

		this->data = x;
}

template<typename T>
void Node<T>::setPrev(Node<T>* x){

		this->data = x;
}

template<typename T>

void Node<T>::makeNode(T value, Node<T>* next, Node<T>* prev){
	
		this->data = value;
		this->next = next;
		this->prev = prev;
}

#endif