/*
    Reference: a way for us to reference another variable, think alias
                can't create a reference to another reference variable or to a pointer
                can't change where a reference points to once declared
*/

#include<iostream>

using namespace std;

//Pass by value functioncall
void increament(int x){
    x++;
}

//Pass by reference function call
void increatement2(int* x){
   *(x)++; //Deference then increament the value
}

//Pass by reference function call
void increatement3(int& x){
   x++;
}

int main(int arcg, char** argv){

    int x = 5;
    int& rx = x; //The & between int and rx is apart of the reference type. We don't need any fancy syntax after that

    cout << "X is equal to: " << x << endl;

    rx++; //From here, we can treat rx like it's x
    cout << "X is equal to: " << x << endl;

    rx++;
    cout << "X is equal to: " << x << endl;

    increament(x); //Here we are doing a pass by value, a copy of x is passed to the function
    cout << "After call to increament X is equal to: " << x << endl;

    increatement2(&x); //Pass by reference using a pointer
    cout << "After call to increament2 X is equal to: " << x << endl;

    increatement3(x); //Pass by reference using a reference
    cout << "After call to increament3 X is equal to: " << x << endl;

    return 0;
}