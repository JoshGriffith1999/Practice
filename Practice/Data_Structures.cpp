#include<iostream>
#include"Linked_Lists.hpp"
#include "Stack.hpp"


using namespace std;

int main(){
	
	Stack<int> obj;
	
	
	obj.addStack(0);
	obj.addStack(1);
	obj.addStack(2);
	obj.addStack(3);
	
	obj.seeStack();
	
	obj.removeHead();
	
	obj.seeStack();
	
	
		
	return 0;
}