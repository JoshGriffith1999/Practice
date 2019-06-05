#include<iostream>
#include"Linked_Lists.hpp"
#include "Stack.hpp"


using namespace std;

int main(){
	
	LL<int> obj;
	
	
	obj.addHead(0);
	obj.addHead(3);
	obj.addHead(2);
	obj.addHead(1);
	obj.addHead(0);
	
	
	
	obj.addLast(6);
	obj.addLast(7);
	obj.addLast(8);
	obj.addLast(9);
	obj.addLast(10);
	
	
	
	obj.addMiddle(11,3);
	
	obj.printList(1);
	
	return 0;
}