#include<iostream>
#include"Sort.h"
using namespace std;

template<typename T>
void Sort::bubble(T array){

    int arraySize = array.length;
    int hold = 0;

    for(int i = 0; i < arraySize; i++){
        for(int k = 0; k < arraySize; k++){

            if(array[i] < array[k]){
                hold = array[i];
                array[i] = array[k];
                array[k] = hold;

            }
        }
    }
}