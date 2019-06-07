#ifndef Node_HPP
#define Node_HPP
#include<iostream>

using namespace std;
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

/*
Function that edits the value, next and prev pointers/variables
requires in order: value to added to list, next pointer, prev pointer
returns nothing
*/
template<typename T>
void Node<T>::makeNodeHelper(T value, Node<T>* next, Node<T>* prev){
	
		this->data = value;
		this->next = next;
		this->prev = prev;
}

/*
function called when creating a new node for the list, primes the makeNodeHelper function by passing in the value for the node and NUll for next and prev
requires only the value being added to the list
returns nothing
*/
template<typename T>
Node<T>::Node(T value){
	
	this->makeNodeHelper(value, NULL,NULL);
}

/*
gets the next pointer stored in the node
needs the value in the node
returns nothing
*/
template<typename T>
Node<T>* Node<T>::getNext(){
	
	return this->next;
}

/*
gets the prev varibale stored in the node
needs prev
returns nothing
*/
template<typename T>
Node<T>* Node<T>::getPrev(){
	
	return this->prev;
}

/*
gets the value varibale stored in the node
needs value
returns nothing
*/
template<typename T>
T Node<T>::getValue(){
	
	return this->data;
	
}

/*
sets/changes next pointer in node
requires the next pointer
returns nothing
*/
template<typename T>
void Node<T>::setNext(Node<T>* x){

		this->next = x;
}

/*
sets/changes prev pointer in node
requires the prev pointer
returns nothing
*/
template<typename T>
void Node<T>::setPrev(Node<T>* x){

		this->prev = x;
}

/*
sets/changes value in node
requires the value
returns nothing
*/
template<typename T>
void Node<T>::setValue(T x){

		this->data = x;
}

#endif