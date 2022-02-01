#include<iostream>
#include"Sort.h"
#define SIZE 5

using namespace std;


int main(){

    int array[SIZE] = {12,11,13,5,6};

    bubble(array);
    //insertion(array);
    //selection(array);   
    for(int i = 0; i < SIZE; i++)
        cout << array[i] << endl;
    return 0;
}