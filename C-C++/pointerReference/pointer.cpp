/*
    Pointers: Special variable type that holds the memory address of a similair type variable
                really its just an integer that holds an integer value that happens toe be a memory address
                the type we assign it is really just for us and the compiler to know how much memory to assign for read and write
*/

#include<iostream>

using namespace std;


void func(int* x);

int main(int argc, char** argv){

    void* ptr = NULL; //Typeless variable 

    int x = 5;
    int* px = &x; //When we use the & infront of a regular variable, we are sasking that variable for its memory address 

     cout << "X is equal to: "  << x << endl;
    func(px);

    cout << "X is now equal to: "  << x << endl;
    cout << "The memory address stored in px is:\t" << px << endl;
    cout << "The memory address of x is:\t\t" << &x << endl;

    int** ppx = &px; //Create a pointer pointer that stores the memory address of a pointer

    cout << "The memory address stored in ppx is:\t" << px << endl;
    cout << "The memory address of x is:\t\t" << &px << endl;


    //Allocate memory on the heap
    char* buffer = new char[8];
    
    buffer[0] = 'T';
    buffer[1] = 'e';
    buffer[2] = 's';
    buffer[3] = 't';
    buffer[4] = 'T';
    buffer[5] = 'e';
    buffer[6] = 's';
    buffer[7] = 't';

    cout << "Buffer is full of: " << buffer << endl;

    delete[] buffer; // Free the allocated memory on the heap
    
    return 0;
}

void func(int* x){

    for(int i = 0; i < 10; i++){
        *x+=i; //derefencing to the value stored at that address
    }
}