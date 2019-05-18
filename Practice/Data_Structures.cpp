#include<iostream>
#include"Linked_Lists.hpp"

using namespace std;

int main(){
	
	LL<int> obj;
	
	obj.addHead(0);
	obj.addHead(1);
	obj.addHead(2);
	obj.addHead(3);
	obj.addHead(4);
	
	obj.printList();
	
	return 0;
}