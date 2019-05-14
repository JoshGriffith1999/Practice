#include<iostream>
#include"Linked_Lists.hpp"

using namespace std;

int main(){
	
	LL obj;
	
	obj.addFirst(0);
	obj.addFirst(1);
	obj.addFirst(2);
	obj.addFirst(3);
	obj.addFirst(4);
	
	obj.printList();
	
	return 0;
}