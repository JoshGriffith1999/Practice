#include<iostream>
#include"Linked_Lists.hpp"
#include "Stack.hpp"
#include "Queues.hpp"


using namespace std;

int main(){
	
	Queue<int> obj;
	
	
	obj.addQueue(0);
	obj.addQueue(1);
	obj.addQueue(2);
	obj.addQueue(3);
	obj.addQueue(4);
	
	obj.printQueue();
	
	obj.removeHead();
	
	obj.printQueue();
	
	
		
	return 0;
}