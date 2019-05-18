#ifndef Node_HPP
#define Node_HPP
#include<iostream>

//Node class
template<typename T>
class Node{
	
	private:
		T data;
		Node<T>* next;
		Node<T>* prev;
		void makeNodeHelper(T, Node<T>*, Node<T>*);
		 
	public:
		//Node maker function
		Node(T);
		//Get value/info stored in of the three private mambers
		Node<T>* getNext();
		Node<T>* getPrev();
		T getValue();
		//Sets value to any of the three private members
		void setNext(Node<T>*);
		void setPrev(Node<T>*);
		void setValue(T);	
};

template<typename T>
void Node<T>::makeNodeHelper(T value, Node<T>* next, Node<T>* prev){
	
		this->data = value;
		this->next = next;
		this->prev = prev;
}

template<typename T>
Node<T>::Node(T value){
	
	this->makeNodeHelper(value, NULL,NULL);
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
T Node<T>::getValue(){
	
	return this->data;
	
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
void Node<T>::setValue(T x){

		this->data = x;
}

#endif